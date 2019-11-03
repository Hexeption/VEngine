//
// Created by Hexeption on 03/11/2019.
//

#ifndef VENGINE_VENGINESWAPCHAIN_HPP
#define VENGINE_VENGINESWAPCHAIN_HPP

#include <vector>
#include <iostream>
#include <cassert>
#include "vkProto.h"
#include "macros.hpp"

typedef struct _SwapChainBuffers {
    VkImage image;
    VkImageView view;
} SwapChainBuffer;

class VEngineSwapChain {
private:
    VkInstance instance;
    VkDevice device;
    VkPhysicalDevice physicalDevice;
    VkSurfaceKHR surface;
public :
    VkFormat colorFormat;
    VkColorSpaceKHR colorSpace;
    VkSwapchainKHR swapChain = VK_NULL_HANDLE;
    uint32_t imageCount;
    std::vector<VkImage> images;
    std::vector<SwapChainBuffer> buffers;
    VkExtent2D extent = {};
    uint32_t queueNodeIndex = UINT32_MAX;

    void initSurface(GLFWwindow *window) {
        VkResult err = VK_SUCCESS;

        // Crate surface
        err = glfwCreateWindowSurface(instance, window, NULL, &surface);

        if (err != VK_SUCCESS) {
            std::cerr << "Could not create surface!" << std::endl;
            exit(err);
        }

        // Get available queue family properties
        uint32_t queueCount;
        vkGetPhysicalDeviceQueueFamilyProperties(physicalDevice, &queueCount, NULL);
        assert(queueCount >= 1);

        std::vector<VkQueueFamilyProperties> queueProps(queueCount);
        vkGetPhysicalDeviceQueueFamilyProperties(physicalDevice, &queueCount, queueProps.data());

        // Iterate over each queue to find whether it supports presenting:
        // Find a queue with present support
        // will be used to present the swap chain images to the window.
        std::vector<VkBool32> supportsPresent(queueCount);
        for (uint32_t i = 0; i < queueCount; i++) {
            vkGetPhysicalDeviceSurfaceSupportKHR(physicalDevice, i, surface, &supportsPresent[i]);
        }

        // Search for a graphics and present queue in the array of the queue
        // families, ty to fine one that supports both of them.
        uint32_t graphicsQueueNodeIndex = UINT32_MAX;
        uint32_t presentQueueNodeIndex = UINT32_MAX;
        for (uint32_t i = 0; i < queueCount; i++) {
            if ((queueProps[i].queueFlags && VK_QUEUE_GRAPHICS_BIT) != 0) {
                if (graphicsQueueNodeIndex == UINT32_MAX) {
                    graphicsQueueNodeIndex = i;
                }

                if (supportsPresent[i] == VK_TRUE) {
                    graphicsQueueNodeIndex = i;
                    presentQueueNodeIndex = i;
                    break;
                }
            }
        }

        if (presentQueueNodeIndex == UINT32_MAX) {
            // If there's no queue that supports present and graphics
            // try to find a separate present queue
            for (uint32_t i = 0; i < queueCount; i++) {
                if (supportsPresent[i] == VK_TRUE) {
                    presentQueueNodeIndex = i;
                    break;
                }
            }
        }

        // Exit if a graphics and presenting queue hasn't been found
        if (graphicsQueueNodeIndex == UINT32_MAX || presentQueueNodeIndex == UINT32_MAX) {
            std::cerr << "Could not find a graphics and/or presenting queue!" << std::endl;
            exit(-1);
        }

        queueNodeIndex = graphicsQueueNodeIndex;

        // Get list of supported surface formas
        uint32_t formatCount;
        VK_CHECK_RESULT(vkGetPhysicalDeviceSurfaceFormatsKHR(physicalDevice, surface, &formatCount, NULL));

        assert(formatCount > 0);

        std::vector<VkSurfaceFormatKHR> surfaceFormats(formatCount);
        VK_CHECK_RESULT(
                vkGetPhysicalDeviceSurfaceFormatsKHR(physicalDevice, surface, &formatCount, surfaceFormats.data()));

        // If the surface format list only inline one entry with VK_FORMAT_UNDEFINED,
        // there is no preferred format, so we can assume VK_FORMAT_B8G8R8A8_UNORM
        if ((formatCount == 1) && (surfaceFormats[0].format == VK_FORMAT_UNDEFINED)) {
            colorFormat = VK_FORMAT_B8G8R8A8_UNORM;
            colorSpace = surfaceFormats[0].colorSpace;
        } else {
            bool found_B8G8R8A8_UNORM = false;
            for (auto &&surfaceFormat : surfaceFormats) {
                //Prefer srgb
                if (surfaceFormat.format == VK_FORMAT_B8G8R8A8_SRGB) {
                    colorFormat = surfaceFormat.format;
                    colorSpace = surfaceFormat.colorSpace;
                    found_B8G8R8A8_UNORM = true;
                    break;
                }
            }

            // in case VK_FORMAT_B8G8R8A8_UNORM is not available
            // select the first available color format
            if (!found_B8G8R8A8_UNORM) {
                colorFormat = surfaceFormats[0].format;
                colorSpace = surfaceFormats[0].colorSpace;
            }
        }
    }

    /**
     * Set instance, physical and logical device for use in the swapchain.
     * @param instance Vulkan instance to use
     * @param physicalDevice Physical device used to query properties and formats relevant to the swapchain
     * @param device Logical represntation of the device to create the swapchain for
     */
    void connect(VkInstance instance, VkPhysicalDevice physicalDevice, VkDevice device) {
        this->instance = instance;
        this->physicalDevice = physicalDevice;
        this->device = device;
    }

    /**
     * Create the swapchain and get it's images with given width and height
     * @param width Pointer to the width of the swapchain (may be adjusted to fit the requirements of the swapchain)
     * @param height Pointer to the height of the swapchain (may be adjusted to fit the requirements of the swapchain)
     * @param vsync (Optional) Can be used to force vsync'd rendering (by using VK_PRESENT_MODE_FIFO_KHR as presentation mode)
     */
    void create(uint32_t *width, uint32_t *height, bool vsync = false) {
        VkSwapchainKHR oldSwapchain = swapChain;

        // Get physical device surface properties and formats
        VkSurfaceCapabilitiesKHR surfaceCapabilities;
        VK_CHECK_RESULT(vkGetPhysicalDeviceSurfaceCapabilitiesKHR(physicalDevice, surface, &surfaceCapabilities));

        // Get available present modes
        uint32_t presentModeCount;
        VK_CHECK_RESULT(vkGetPhysicalDeviceSurfacePresentModesKHR(physicalDevice, surface, &presentModeCount, NULL));
        assert(presentModeCount > 0);

        std::vector<VkPresentModeKHR> presentModes(presentModeCount);
        VK_CHECK_RESULT(
                vkGetPhysicalDeviceSurfacePresentModesKHR(physicalDevice, surface, &presentModeCount,
                                                          presentModes.data()));

        // If width (and height) equeals the special value 0xFFFFFFFF, the size of the surface will be set by the swapchain
        if (surfaceCapabilities.currentExtent.width == (uint32_t) -1) {
            // if the surface size is undefined, the size is set to
            // the size of the images requested.
            extent.width = *width;
            extent.height = *height;
        } else {
            // if the surface size is defined, the swapchain size must match
            extent = surfaceCapabilities.currentExtent;
            *width = surfaceCapabilities.currentExtent.width;
            *height = surfaceCapabilities.currentExtent.height;
        }

        // Select a present mode for the swapchain

        // The VK_PRESENT_MODE_FIFO_KHR mode must always be present as per spec
        // This mode waits for the vertical blank ("v-sync")
        VkPresentModeKHR swapchainPresentMode = VK_PRESENT_MODE_FIFO_KHR;


        // If v-sync is not requested, try find a mailbox mode
        //It's the lowest Latency non-taring present mode available
        if (!vsync) {
            for (size_t i = 0; i < presentModeCount; ++i) {
                if (presentModes[i] == VK_PRESENT_MODE_MAILBOX_KHR) {
                    swapchainPresentMode = VK_PRESENT_MODE_MAILBOX_KHR;
                    break;
                }
                if ((swapchainPresentMode != VK_PRESENT_MODE_MAILBOX_KHR) &&
                    (presentModes[i] == VK_PRESENT_MODE_IMMEDIATE_KHR)) {
                    swapchainPresentMode = VK_PRESENT_MODE_IMMEDIATE_KHR;
                }
            }
        }

        // Determine the number of images
        uint32_t desiredNumberOfSwapImages = surfaceCapabilities.minImageCount + 1;
        if ((surfaceCapabilities.maxImageCount > 0) &&
            (desiredNumberOfSwapImages > surfaceCapabilities.maxImageCount)) {
            desiredNumberOfSwapImages = surfaceCapabilities.maxImageCount;
        }

        // Find the transformation of the surface
        VkSurfaceTransformFlagsKHR preTransform;
        if (surfaceCapabilities.supportedTransforms & VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR) {
            // We prefer a none-rotated transform
            preTransform = VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR;
        } else {
            preTransform = surfaceCapabilities.currentTransform;
        }


        // Find a supported composite alpha (not all devices support alpha opaque)
        VkCompositeAlphaFlagBitsKHR compositeAlpha = VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR;
        // Simply select the first composite alpha format available
        std::vector<VkCompositeAlphaFlagBitsKHR> compositeAlphaFlags = {
                VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR,
                VK_COMPOSITE_ALPHA_PRE_MULTIPLIED_BIT_KHR,
                VK_COMPOSITE_ALPHA_POST_MULTIPLIED_BIT_KHR,
                VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR
        };
        for (auto &compositeAlphaFlag : compositeAlphaFlags) {
            if (surfaceCapabilities.supportedCompositeAlpha & compositeAlphaFlag) {
                compositeAlpha = compositeAlphaFlag;
                break;
            }
        }

        // Create the swapchain info
        VkSwapchainCreateInfoKHR swapchainCreateInfo = {};
        swapchainCreateInfo.sType = VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR;
        swapchainCreateInfo.pNext = NULL;
        swapchainCreateInfo.surface = surface;
        surfaceCapabilities.minImageCount = desiredNumberOfSwapImages;
        swapchainCreateInfo.imageFormat = colorFormat;
        swapchainCreateInfo.imageColorSpace = colorSpace;
        swapchainCreateInfo.imageExtent = {extent.width, extent.height};
        swapchainCreateInfo.imageUsage = VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT;
        swapchainCreateInfo.preTransform = (VkSurfaceTransformFlagBitsKHR) preTransform;
        swapchainCreateInfo.imageArrayLayers = 1;
        swapchainCreateInfo.imageSharingMode = VK_SHARING_MODE_EXCLUSIVE;
        swapchainCreateInfo.queueFamilyIndexCount = 0;
        swapchainCreateInfo.pQueueFamilyIndices = NULL;
        swapchainCreateInfo.presentMode = swapchainPresentMode;
        swapchainCreateInfo.oldSwapchain = oldSwapchain;
        // Setting clipped to VK_TRUE allows the implementation to discard rending outside of the surface area
        swapchainCreateInfo.clipped = VK_TRUE;
        swapchainCreateInfo.compositeAlpha = compositeAlpha;

    }


};


#endif //VENGINE_VENGINESWAPCHAIN_HPP
