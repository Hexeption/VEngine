#include "vkProto.h"

PFN_vkDestroyInstance g_pvkDestroyInstance;
PFN_vkEnumeratePhysicalDevices g_pvkEnumeratePhysicalDevices;
PFN_vkGetPhysicalDeviceFeatures g_pvkGetPhysicalDeviceFeatures;
PFN_vkGetPhysicalDeviceFormatProperties g_pvkGetPhysicalDeviceFormatProperties;
PFN_vkGetPhysicalDeviceImageFormatProperties g_pvkGetPhysicalDeviceImageFormatProperties;
PFN_vkGetPhysicalDeviceProperties g_pvkGetPhysicalDeviceProperties;
PFN_vkGetPhysicalDeviceQueueFamilyProperties g_pvkGetPhysicalDeviceQueueFamilyProperties;
PFN_vkGetPhysicalDeviceMemoryProperties g_pvkGetPhysicalDeviceMemoryProperties;
PFN_vkGetInstanceProcAddr g_pvkGetInstanceProcAddr;
PFN_vkGetDeviceProcAddr g_pvkGetDeviceProcAddr;
PFN_vkCreateDevice g_pvkCreateDevice;
PFN_vkDestroyDevice g_pvkDestroyDevice;
PFN_vkEnumerateInstanceExtensionProperties g_pvkEnumerateInstanceExtensionProperties;
PFN_vkEnumerateDeviceExtensionProperties g_pvkEnumerateDeviceExtensionProperties;
PFN_vkEnumerateInstanceLayerProperties g_pvkEnumerateInstanceLayerProperties;
PFN_vkEnumerateDeviceLayerProperties g_pvkEnumerateDeviceLayerProperties;
PFN_vkGetDeviceQueue g_pvkGetDeviceQueue;
PFN_vkQueueSubmit g_pvkQueueSubmit;
PFN_vkQueueWaitIdle g_pvkQueueWaitIdle;
PFN_vkDeviceWaitIdle g_pvkDeviceWaitIdle;
PFN_vkAllocateMemory g_pvkAllocateMemory;
PFN_vkFreeMemory g_pvkFreeMemory;
PFN_vkMapMemory g_pvkMapMemory;
PFN_vkUnmapMemory g_pvkUnmapMemory;
PFN_vkFlushMappedMemoryRanges g_pvkFlushMappedMemoryRanges;
PFN_vkInvalidateMappedMemoryRanges g_pvkInvalidateMappedMemoryRanges;
PFN_vkGetDeviceMemoryCommitment g_pvkGetDeviceMemoryCommitment;
PFN_vkBindBufferMemory g_pvkBindBufferMemory;
PFN_vkBindImageMemory g_pvkBindImageMemory;
PFN_vkGetBufferMemoryRequirements g_pvkGetBufferMemoryRequirements;
PFN_vkGetImageMemoryRequirements g_pvkGetImageMemoryRequirements;
PFN_vkGetImageSparseMemoryRequirements g_pvkGetImageSparseMemoryRequirements;
PFN_vkGetPhysicalDeviceSparseImageFormatProperties g_pvkGetPhysicalDeviceSparseImageFormatProperties;
PFN_vkQueueBindSparse g_pvkQueueBindSparse;
PFN_vkCreateFence g_pvkCreateFence;
PFN_vkDestroyFence g_pvkDestroyFence;
PFN_vkResetFences g_pvkResetFences;
PFN_vkGetFenceStatus g_pvkGetFenceStatus;
PFN_vkWaitForFences g_pvkWaitForFences;
PFN_vkCreateSemaphore g_pvkCreateSemaphore;
PFN_vkDestroySemaphore g_pvkDestroySemaphore;
PFN_vkCreateEvent g_pvkCreateEvent;
PFN_vkDestroyEvent g_pvkDestroyEvent;
PFN_vkGetEventStatus g_pvkGetEventStatus;
PFN_vkSetEvent g_pvkSetEvent;
PFN_vkResetEvent g_pvkResetEvent;
PFN_vkCreateQueryPool g_pvkCreateQueryPool;
PFN_vkDestroyQueryPool g_pvkDestroyQueryPool;
PFN_vkGetQueryPoolResults g_pvkGetQueryPoolResults;
PFN_vkCreateBuffer g_pvkCreateBuffer;
PFN_vkDestroyBuffer g_pvkDestroyBuffer;
PFN_vkCreateBufferView g_pvkCreateBufferView;
PFN_vkDestroyBufferView g_pvkDestroyBufferView;
PFN_vkCreateImage g_pvkCreateImage;
PFN_vkDestroyImage g_pvkDestroyImage;
PFN_vkGetImageSubresourceLayout g_pvkGetImageSubresourceLayout;
PFN_vkCreateImageView g_pvkCreateImageView;
PFN_vkDestroyImageView g_pvkDestroyImageView;
PFN_vkCreateShaderModule g_pvkCreateShaderModule;
PFN_vkDestroyShaderModule g_pvkDestroyShaderModule;
PFN_vkCreatePipelineCache g_pvkCreatePipelineCache;
PFN_vkDestroyPipelineCache g_pvkDestroyPipelineCache;
PFN_vkGetPipelineCacheData g_pvkGetPipelineCacheData;
PFN_vkMergePipelineCaches g_pvkMergePipelineCaches;
PFN_vkCreateGraphicsPipelines g_pvkCreateGraphicsPipelines;
PFN_vkCreateComputePipelines g_pvkCreateComputePipelines;
PFN_vkDestroyPipeline g_pvkDestroyPipeline;
PFN_vkCreatePipelineLayout g_pvkCreatePipelineLayout;
PFN_vkDestroyPipelineLayout g_pvkDestroyPipelineLayout;
PFN_vkCreateSampler g_pvkCreateSampler;
PFN_vkDestroySampler g_pvkDestroySampler;
PFN_vkCreateDescriptorSetLayout g_pvkCreateDescriptorSetLayout;
PFN_vkDestroyDescriptorSetLayout g_pvkDestroyDescriptorSetLayout;
PFN_vkCreateDescriptorPool g_pvkCreateDescriptorPool;
PFN_vkDestroyDescriptorPool g_pvkDestroyDescriptorPool;
PFN_vkResetDescriptorPool g_pvkResetDescriptorPool;
PFN_vkAllocateDescriptorSets g_pvkAllocateDescriptorSets;
PFN_vkFreeDescriptorSets g_pvkFreeDescriptorSets;
PFN_vkUpdateDescriptorSets g_pvkUpdateDescriptorSets;
PFN_vkCreateFramebuffer g_pvkCreateFramebuffer;
PFN_vkDestroyFramebuffer g_pvkDestroyFramebuffer;
PFN_vkCreateRenderPass g_pvkCreateRenderPass;
PFN_vkDestroyRenderPass g_pvkDestroyRenderPass;
PFN_vkGetRenderAreaGranularity g_pvkGetRenderAreaGranularity;
PFN_vkCreateCommandPool g_pvkCreateCommandPool;
PFN_vkDestroyCommandPool g_pvkDestroyCommandPool;
PFN_vkResetCommandPool g_pvkResetCommandPool;
PFN_vkAllocateCommandBuffers g_pvkAllocateCommandBuffers;
PFN_vkFreeCommandBuffers g_pvkFreeCommandBuffers;
PFN_vkBeginCommandBuffer g_pvkBeginCommandBuffer;
PFN_vkEndCommandBuffer g_pvkEndCommandBuffer;
PFN_vkResetCommandBuffer g_pvkResetCommandBuffer;
PFN_vkCmdBindPipeline g_pvkCmdBindPipeline;
PFN_vkCmdSetViewport g_pvkCmdSetViewport;
PFN_vkCmdSetScissor g_pvkCmdSetScissor;
PFN_vkCmdSetLineWidth g_pvkCmdSetLineWidth;
PFN_vkCmdSetDepthBias g_pvkCmdSetDepthBias;
PFN_vkCmdSetBlendConstants g_pvkCmdSetBlendConstants;
PFN_vkCmdSetDepthBounds g_pvkCmdSetDepthBounds;
PFN_vkCmdSetStencilCompareMask g_pvkCmdSetStencilCompareMask;
PFN_vkCmdSetStencilWriteMask g_pvkCmdSetStencilWriteMask;
PFN_vkCmdSetStencilReference g_pvkCmdSetStencilReference;
PFN_vkCmdBindDescriptorSets g_pvkCmdBindDescriptorSets;
PFN_vkCmdBindIndexBuffer g_pvkCmdBindIndexBuffer;
PFN_vkCmdBindVertexBuffers g_pvkCmdBindVertexBuffers;
PFN_vkCmdDraw g_pvkCmdDraw;
PFN_vkCmdDrawIndexed g_pvkCmdDrawIndexed;
PFN_vkCmdDrawIndirect g_pvkCmdDrawIndirect;
PFN_vkCmdDrawIndexedIndirect g_pvkCmdDrawIndexedIndirect;
PFN_vkCmdDispatch g_pvkCmdDispatch;
PFN_vkCmdDispatchIndirect g_pvkCmdDispatchIndirect;
PFN_vkCmdCopyBuffer g_pvkCmdCopyBuffer;
PFN_vkCmdCopyImage g_pvkCmdCopyImage;
PFN_vkCmdBlitImage g_pvkCmdBlitImage;
PFN_vkCmdCopyBufferToImage g_pvkCmdCopyBufferToImage;
PFN_vkCmdCopyImageToBuffer g_pvkCmdCopyImageToBuffer;
PFN_vkCmdUpdateBuffer g_pvkCmdUpdateBuffer;
PFN_vkCmdFillBuffer g_pvkCmdFillBuffer;
PFN_vkCmdClearColorImage g_pvkCmdClearColorImage;
PFN_vkCmdClearDepthStencilImage g_pvkCmdClearDepthStencilImage;
PFN_vkCmdClearAttachments g_pvkCmdClearAttachments;
PFN_vkCmdResolveImage g_pvkCmdResolveImage;
PFN_vkCmdSetEvent g_pvkCmdSetEvent;
PFN_vkCmdResetEvent g_pvkCmdResetEvent;
PFN_vkCmdWaitEvents g_pvkCmdWaitEvents;
PFN_vkCmdPipelineBarrier g_pvkCmdPipelineBarrier;
PFN_vkCmdBeginQuery g_pvkCmdBeginQuery;
PFN_vkCmdEndQuery g_pvkCmdEndQuery;
PFN_vkCmdResetQueryPool g_pvkCmdResetQueryPool;
PFN_vkCmdWriteTimestamp g_pvkCmdWriteTimestamp;
PFN_vkCmdCopyQueryPoolResults g_pvkCmdCopyQueryPoolResults;
PFN_vkCmdPushConstants g_pvkCmdPushConstants;
PFN_vkCmdBeginRenderPass g_pvkCmdBeginRenderPass;
PFN_vkCmdNextSubpass g_pvkCmdNextSubpass;
PFN_vkCmdEndRenderPass g_pvkCmdEndRenderPass;
PFN_vkCmdExecuteCommands g_pvkCmdExecuteCommands;
PFN_vkDestroySurfaceKHR g_pvkDestroySurfaceKHR;
PFN_vkGetPhysicalDeviceSurfaceSupportKHR g_pvkGetPhysicalDeviceSurfaceSupportKHR;
PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR g_pvkGetPhysicalDeviceSurfaceCapabilitiesKHR;
PFN_vkGetPhysicalDeviceSurfaceFormatsKHR g_pvkGetPhysicalDeviceSurfaceFormatsKHR;
PFN_vkGetPhysicalDeviceSurfacePresentModesKHR g_pvkGetPhysicalDeviceSurfacePresentModesKHR;
PFN_vkCreateSwapchainKHR g_pvkCreateSwapchainKHR;
PFN_vkDestroySwapchainKHR g_pvkDestroySwapchainKHR;
PFN_vkGetSwapchainImagesKHR g_pvkGetSwapchainImagesKHR;
PFN_vkAcquireNextImageKHR g_pvkAcquireNextImageKHR;
PFN_vkQueuePresentKHR g_pvkQueuePresentKHR;
PFN_vkGetPhysicalDeviceDisplayPropertiesKHR g_pvkGetPhysicalDeviceDisplayPropertiesKHR;
PFN_vkGetPhysicalDeviceDisplayPlanePropertiesKHR g_pvkGetPhysicalDeviceDisplayPlanePropertiesKHR;
PFN_vkGetDisplayPlaneSupportedDisplaysKHR g_pvkGetDisplayPlaneSupportedDisplaysKHR;
PFN_vkGetDisplayModePropertiesKHR g_pvkGetDisplayModePropertiesKHR;
PFN_vkCreateDisplayModeKHR g_pvkCreateDisplayModeKHR;
PFN_vkGetDisplayPlaneCapabilitiesKHR g_pvkGetDisplayPlaneCapabilitiesKHR;
PFN_vkCreateDisplayPlaneSurfaceKHR g_pvkCreateDisplayPlaneSurfaceKHR;

VkResult loadVKFuncs(VkInstance instance) {
	g_pvkDestroyInstance = (PFN_vkDestroyInstance)glfwGetInstanceProcAddress(instance, "vkDestroyInstance");
	g_pvkEnumeratePhysicalDevices = (PFN_vkEnumeratePhysicalDevices)glfwGetInstanceProcAddress(instance, "vkEnumeratePhysicalDevices");
	g_pvkGetPhysicalDeviceFeatures = (PFN_vkGetPhysicalDeviceFeatures)glfwGetInstanceProcAddress(instance, "vkGetPhysicalDeviceFeatures");
	g_pvkGetPhysicalDeviceFormatProperties = (PFN_vkGetPhysicalDeviceFormatProperties)glfwGetInstanceProcAddress(instance, "vkGetPhysicalDeviceFormatProperties");
	g_pvkGetPhysicalDeviceImageFormatProperties = (PFN_vkGetPhysicalDeviceImageFormatProperties)glfwGetInstanceProcAddress(instance, "vkGetPhysicalDeviceImageFormatProperties");
	g_pvkGetPhysicalDeviceProperties = (PFN_vkGetPhysicalDeviceProperties)glfwGetInstanceProcAddress(instance, "vkGetPhysicalDeviceProperties");
	g_pvkGetPhysicalDeviceQueueFamilyProperties = (PFN_vkGetPhysicalDeviceQueueFamilyProperties)glfwGetInstanceProcAddress(instance, "vkGetPhysicalDeviceQueueFamilyProperties");
	g_pvkGetPhysicalDeviceMemoryProperties = (PFN_vkGetPhysicalDeviceMemoryProperties)glfwGetInstanceProcAddress(instance, "vkGetPhysicalDeviceMemoryProperties");
	g_pvkGetInstanceProcAddr = (PFN_vkGetInstanceProcAddr)glfwGetInstanceProcAddress(instance, "vkGetInstanceProcAddr");
	g_pvkGetDeviceProcAddr = (PFN_vkGetDeviceProcAddr)glfwGetInstanceProcAddress(instance, "vkGetDeviceProcAddr");
	g_pvkCreateDevice = (PFN_vkCreateDevice)glfwGetInstanceProcAddress(instance, "vkCreateDevice");
	g_pvkDestroyDevice = (PFN_vkDestroyDevice)glfwGetInstanceProcAddress(instance, "vkDestroyDevice");
	g_pvkEnumerateInstanceExtensionProperties = (PFN_vkEnumerateInstanceExtensionProperties)glfwGetInstanceProcAddress(instance, "vkEnumerateInstanceExtensionProperties");
	g_pvkEnumerateDeviceExtensionProperties = (PFN_vkEnumerateDeviceExtensionProperties)glfwGetInstanceProcAddress(instance, "vkEnumerateDeviceExtensionProperties");
	g_pvkEnumerateInstanceLayerProperties = (PFN_vkEnumerateInstanceLayerProperties)glfwGetInstanceProcAddress(instance, "vkEnumerateInstanceLayerProperties");
	g_pvkEnumerateDeviceLayerProperties = (PFN_vkEnumerateDeviceLayerProperties)glfwGetInstanceProcAddress(instance, "vkEnumerateDeviceLayerProperties");
	g_pvkGetDeviceQueue = (PFN_vkGetDeviceQueue)glfwGetInstanceProcAddress(instance, "vkGetDeviceQueue");
	g_pvkQueueSubmit = (PFN_vkQueueSubmit)glfwGetInstanceProcAddress(instance, "vkQueueSubmit");
	g_pvkQueueWaitIdle = (PFN_vkQueueWaitIdle)glfwGetInstanceProcAddress(instance, "vkQueueWaitIdle");
	g_pvkDeviceWaitIdle = (PFN_vkDeviceWaitIdle)glfwGetInstanceProcAddress(instance, "vkDeviceWaitIdle");
	g_pvkAllocateMemory = (PFN_vkAllocateMemory)glfwGetInstanceProcAddress(instance, "vkAllocateMemory");
	g_pvkFreeMemory = (PFN_vkFreeMemory)glfwGetInstanceProcAddress(instance, "vkFreeMemory");
	g_pvkMapMemory = (PFN_vkMapMemory)glfwGetInstanceProcAddress(instance, "vkMapMemory");
	g_pvkUnmapMemory = (PFN_vkUnmapMemory)glfwGetInstanceProcAddress(instance, "vkUnmapMemory");
	g_pvkFlushMappedMemoryRanges = (PFN_vkFlushMappedMemoryRanges)glfwGetInstanceProcAddress(instance, "vkFlushMappedMemoryRanges");
	g_pvkInvalidateMappedMemoryRanges = (PFN_vkInvalidateMappedMemoryRanges)glfwGetInstanceProcAddress(instance, "vkInvalidateMappedMemoryRanges");
	g_pvkGetDeviceMemoryCommitment = (PFN_vkGetDeviceMemoryCommitment)glfwGetInstanceProcAddress(instance, "vkGetDeviceMemoryCommitment");
	g_pvkBindBufferMemory = (PFN_vkBindBufferMemory)glfwGetInstanceProcAddress(instance, "vkBindBufferMemory");
	g_pvkBindImageMemory = (PFN_vkBindImageMemory)glfwGetInstanceProcAddress(instance, "vkBindImageMemory");
	g_pvkGetBufferMemoryRequirements = (PFN_vkGetBufferMemoryRequirements)glfwGetInstanceProcAddress(instance, "vkGetBufferMemoryRequirements");
	g_pvkGetImageMemoryRequirements = (PFN_vkGetImageMemoryRequirements)glfwGetInstanceProcAddress(instance, "vkGetImageMemoryRequirements");
	g_pvkGetImageSparseMemoryRequirements = (PFN_vkGetImageSparseMemoryRequirements)glfwGetInstanceProcAddress(instance, "vkGetImageSparseMemoryRequirements");
	g_pvkGetPhysicalDeviceSparseImageFormatProperties = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties)glfwGetInstanceProcAddress(instance, "vkGetPhysicalDeviceSparseImageFormatProperties");
	g_pvkQueueBindSparse = (PFN_vkQueueBindSparse)glfwGetInstanceProcAddress(instance, "vkQueueBindSparse");
	g_pvkCreateFence = (PFN_vkCreateFence)glfwGetInstanceProcAddress(instance, "vkCreateFence");
	g_pvkDestroyFence = (PFN_vkDestroyFence)glfwGetInstanceProcAddress(instance, "vkDestroyFence");
	g_pvkResetFences = (PFN_vkResetFences)glfwGetInstanceProcAddress(instance, "vkResetFences");
	g_pvkGetFenceStatus = (PFN_vkGetFenceStatus)glfwGetInstanceProcAddress(instance, "vkGetFenceStatus");
	g_pvkWaitForFences = (PFN_vkWaitForFences)glfwGetInstanceProcAddress(instance, "vkWaitForFences");
	g_pvkCreateSemaphore = (PFN_vkCreateSemaphore)glfwGetInstanceProcAddress(instance, "vkCreateSemaphore");
	g_pvkDestroySemaphore = (PFN_vkDestroySemaphore)glfwGetInstanceProcAddress(instance, "vkDestroySemaphore");
	g_pvkCreateEvent = (PFN_vkCreateEvent)glfwGetInstanceProcAddress(instance, "vkCreateEvent");
	g_pvkDestroyEvent = (PFN_vkDestroyEvent)glfwGetInstanceProcAddress(instance, "vkDestroyEvent");
	g_pvkGetEventStatus = (PFN_vkGetEventStatus)glfwGetInstanceProcAddress(instance, "vkGetEventStatus");
	g_pvkSetEvent = (PFN_vkSetEvent)glfwGetInstanceProcAddress(instance, "vkSetEvent");
	g_pvkResetEvent = (PFN_vkResetEvent)glfwGetInstanceProcAddress(instance, "vkResetEvent");
	g_pvkCreateQueryPool = (PFN_vkCreateQueryPool)glfwGetInstanceProcAddress(instance, "vkCreateQueryPool");
	g_pvkDestroyQueryPool = (PFN_vkDestroyQueryPool)glfwGetInstanceProcAddress(instance, "vkDestroyQueryPool");
	g_pvkGetQueryPoolResults = (PFN_vkGetQueryPoolResults)glfwGetInstanceProcAddress(instance, "vkGetQueryPoolResults");
	g_pvkCreateBuffer = (PFN_vkCreateBuffer)glfwGetInstanceProcAddress(instance, "vkCreateBuffer");
	g_pvkDestroyBuffer = (PFN_vkDestroyBuffer)glfwGetInstanceProcAddress(instance, "vkDestroyBuffer");
	g_pvkCreateBufferView = (PFN_vkCreateBufferView)glfwGetInstanceProcAddress(instance, "vkCreateBufferView");
	g_pvkDestroyBufferView = (PFN_vkDestroyBufferView)glfwGetInstanceProcAddress(instance, "vkDestroyBufferView");
	g_pvkCreateImage = (PFN_vkCreateImage)glfwGetInstanceProcAddress(instance, "vkCreateImage");
	g_pvkDestroyImage = (PFN_vkDestroyImage)glfwGetInstanceProcAddress(instance, "vkDestroyImage");
	g_pvkGetImageSubresourceLayout = (PFN_vkGetImageSubresourceLayout)glfwGetInstanceProcAddress(instance, "vkGetImageSubresourceLayout");
	g_pvkCreateImageView = (PFN_vkCreateImageView)glfwGetInstanceProcAddress(instance, "vkCreateImageView");
	g_pvkDestroyImageView = (PFN_vkDestroyImageView)glfwGetInstanceProcAddress(instance, "vkDestroyImageView");
	g_pvkCreateShaderModule = (PFN_vkCreateShaderModule)glfwGetInstanceProcAddress(instance, "vkCreateShaderModule");
	g_pvkDestroyShaderModule = (PFN_vkDestroyShaderModule)glfwGetInstanceProcAddress(instance, "vkDestroyShaderModule");
	g_pvkCreatePipelineCache = (PFN_vkCreatePipelineCache)glfwGetInstanceProcAddress(instance, "vkCreatePipelineCache");
	g_pvkDestroyPipelineCache = (PFN_vkDestroyPipelineCache)glfwGetInstanceProcAddress(instance, "vkDestroyPipelineCache");
	g_pvkGetPipelineCacheData = (PFN_vkGetPipelineCacheData)glfwGetInstanceProcAddress(instance, "vkGetPipelineCacheData");
	g_pvkMergePipelineCaches = (PFN_vkMergePipelineCaches)glfwGetInstanceProcAddress(instance, "vkMergePipelineCaches");
	g_pvkCreateGraphicsPipelines = (PFN_vkCreateGraphicsPipelines)glfwGetInstanceProcAddress(instance, "vkCreateGraphicsPipelines");
	g_pvkCreateComputePipelines = (PFN_vkCreateComputePipelines)glfwGetInstanceProcAddress(instance, "vkCreateComputePipelines");
	g_pvkDestroyPipeline = (PFN_vkDestroyPipeline)glfwGetInstanceProcAddress(instance, "vkDestroyPipeline");
	g_pvkCreatePipelineLayout = (PFN_vkCreatePipelineLayout)glfwGetInstanceProcAddress(instance, "vkCreatePipelineLayout");
	g_pvkDestroyPipelineLayout = (PFN_vkDestroyPipelineLayout)glfwGetInstanceProcAddress(instance, "vkDestroyPipelineLayout");
	g_pvkCreateSampler = (PFN_vkCreateSampler)glfwGetInstanceProcAddress(instance, "vkCreateSampler");
	g_pvkDestroySampler = (PFN_vkDestroySampler)glfwGetInstanceProcAddress(instance, "vkDestroySampler");
	g_pvkCreateDescriptorSetLayout = (PFN_vkCreateDescriptorSetLayout)glfwGetInstanceProcAddress(instance, "vkCreateDescriptorSetLayout");
	g_pvkDestroyDescriptorSetLayout = (PFN_vkDestroyDescriptorSetLayout)glfwGetInstanceProcAddress(instance, "vkDestroyDescriptorSetLayout");
	g_pvkCreateDescriptorPool = (PFN_vkCreateDescriptorPool)glfwGetInstanceProcAddress(instance, "vkCreateDescriptorPool");
	g_pvkDestroyDescriptorPool = (PFN_vkDestroyDescriptorPool)glfwGetInstanceProcAddress(instance, "vkDestroyDescriptorPool");
	g_pvkResetDescriptorPool = (PFN_vkResetDescriptorPool)glfwGetInstanceProcAddress(instance, "vkResetDescriptorPool");
	g_pvkAllocateDescriptorSets = (PFN_vkAllocateDescriptorSets)glfwGetInstanceProcAddress(instance, "vkAllocateDescriptorSets");
	g_pvkFreeDescriptorSets = (PFN_vkFreeDescriptorSets)glfwGetInstanceProcAddress(instance, "vkFreeDescriptorSets");
	g_pvkUpdateDescriptorSets = (PFN_vkUpdateDescriptorSets)glfwGetInstanceProcAddress(instance, "vkUpdateDescriptorSets");
	g_pvkCreateFramebuffer = (PFN_vkCreateFramebuffer)glfwGetInstanceProcAddress(instance, "vkCreateFramebuffer");
	g_pvkDestroyFramebuffer = (PFN_vkDestroyFramebuffer)glfwGetInstanceProcAddress(instance, "vkDestroyFramebuffer");
	g_pvkCreateRenderPass = (PFN_vkCreateRenderPass)glfwGetInstanceProcAddress(instance, "vkCreateRenderPass");
	g_pvkDestroyRenderPass = (PFN_vkDestroyRenderPass)glfwGetInstanceProcAddress(instance, "vkDestroyRenderPass");
	g_pvkGetRenderAreaGranularity = (PFN_vkGetRenderAreaGranularity)glfwGetInstanceProcAddress(instance, "vkGetRenderAreaGranularity");
	g_pvkCreateCommandPool = (PFN_vkCreateCommandPool)glfwGetInstanceProcAddress(instance, "vkCreateCommandPool");
	g_pvkDestroyCommandPool = (PFN_vkDestroyCommandPool)glfwGetInstanceProcAddress(instance, "vkDestroyCommandPool");
	g_pvkResetCommandPool = (PFN_vkResetCommandPool)glfwGetInstanceProcAddress(instance, "vkResetCommandPool");
	g_pvkAllocateCommandBuffers = (PFN_vkAllocateCommandBuffers)glfwGetInstanceProcAddress(instance, "vkAllocateCommandBuffers");
	g_pvkFreeCommandBuffers = (PFN_vkFreeCommandBuffers)glfwGetInstanceProcAddress(instance, "vkFreeCommandBuffers");
	g_pvkBeginCommandBuffer = (PFN_vkBeginCommandBuffer)glfwGetInstanceProcAddress(instance, "vkBeginCommandBuffer");
	g_pvkEndCommandBuffer = (PFN_vkEndCommandBuffer)glfwGetInstanceProcAddress(instance, "vkEndCommandBuffer");
	g_pvkResetCommandBuffer = (PFN_vkResetCommandBuffer)glfwGetInstanceProcAddress(instance, "vkResetCommandBuffer");
	g_pvkCmdBindPipeline = (PFN_vkCmdBindPipeline)glfwGetInstanceProcAddress(instance, "vkCmdBindPipeline");
	g_pvkCmdSetViewport = (PFN_vkCmdSetViewport)glfwGetInstanceProcAddress(instance, "vkCmdSetViewport");
	g_pvkCmdSetScissor = (PFN_vkCmdSetScissor)glfwGetInstanceProcAddress(instance, "vkCmdSetScissor");
	g_pvkCmdSetLineWidth = (PFN_vkCmdSetLineWidth)glfwGetInstanceProcAddress(instance, "vkCmdSetLineWidth");
	g_pvkCmdSetDepthBias = (PFN_vkCmdSetDepthBias)glfwGetInstanceProcAddress(instance, "vkCmdSetDepthBias");
	g_pvkCmdSetBlendConstants = (PFN_vkCmdSetBlendConstants)glfwGetInstanceProcAddress(instance, "vkCmdSetBlendConstants");
	g_pvkCmdSetDepthBounds = (PFN_vkCmdSetDepthBounds)glfwGetInstanceProcAddress(instance, "vkCmdSetDepthBounds");
	g_pvkCmdSetStencilCompareMask = (PFN_vkCmdSetStencilCompareMask)glfwGetInstanceProcAddress(instance, "vkCmdSetStencilCompareMask");
	g_pvkCmdSetStencilWriteMask = (PFN_vkCmdSetStencilWriteMask)glfwGetInstanceProcAddress(instance, "vkCmdSetStencilWriteMask");
	g_pvkCmdSetStencilReference = (PFN_vkCmdSetStencilReference)glfwGetInstanceProcAddress(instance, "vkCmdSetStencilReference");
	g_pvkCmdBindDescriptorSets = (PFN_vkCmdBindDescriptorSets)glfwGetInstanceProcAddress(instance, "vkCmdBindDescriptorSets");
	g_pvkCmdBindIndexBuffer = (PFN_vkCmdBindIndexBuffer)glfwGetInstanceProcAddress(instance, "vkCmdBindIndexBuffer");
	g_pvkCmdBindVertexBuffers = (PFN_vkCmdBindVertexBuffers)glfwGetInstanceProcAddress(instance, "vkCmdBindVertexBuffers");
	g_pvkCmdDraw = (PFN_vkCmdDraw)glfwGetInstanceProcAddress(instance, "vkCmdDraw");
	g_pvkCmdDrawIndexed = (PFN_vkCmdDrawIndexed)glfwGetInstanceProcAddress(instance, "vkCmdDrawIndexed");
	g_pvkCmdDrawIndirect = (PFN_vkCmdDrawIndirect)glfwGetInstanceProcAddress(instance, "vkCmdDrawIndirect");
	g_pvkCmdDrawIndexedIndirect = (PFN_vkCmdDrawIndexedIndirect)glfwGetInstanceProcAddress(instance, "vkCmdDrawIndexedIndirect");
	g_pvkCmdDispatch = (PFN_vkCmdDispatch)glfwGetInstanceProcAddress(instance, "vkCmdDispatch");
	g_pvkCmdDispatchIndirect = (PFN_vkCmdDispatchIndirect)glfwGetInstanceProcAddress(instance, "vkCmdDispatchIndirect");
	g_pvkCmdCopyBuffer = (PFN_vkCmdCopyBuffer)glfwGetInstanceProcAddress(instance, "vkCmdCopyBuffer");
	g_pvkCmdCopyImage = (PFN_vkCmdCopyImage)glfwGetInstanceProcAddress(instance, "vkCmdCopyImage");
	g_pvkCmdBlitImage = (PFN_vkCmdBlitImage)glfwGetInstanceProcAddress(instance, "vkCmdBlitImage");
	g_pvkCmdCopyBufferToImage = (PFN_vkCmdCopyBufferToImage)glfwGetInstanceProcAddress(instance, "vkCmdCopyBufferToImage");
	g_pvkCmdCopyImageToBuffer = (PFN_vkCmdCopyImageToBuffer)glfwGetInstanceProcAddress(instance, "vkCmdCopyImageToBuffer");
	g_pvkCmdUpdateBuffer = (PFN_vkCmdUpdateBuffer)glfwGetInstanceProcAddress(instance, "vkCmdUpdateBuffer");
	g_pvkCmdFillBuffer = (PFN_vkCmdFillBuffer)glfwGetInstanceProcAddress(instance, "vkCmdFillBuffer");
	g_pvkCmdClearColorImage = (PFN_vkCmdClearColorImage)glfwGetInstanceProcAddress(instance, "vkCmdClearColorImage");
	g_pvkCmdClearDepthStencilImage = (PFN_vkCmdClearDepthStencilImage)glfwGetInstanceProcAddress(instance, "vkCmdClearDepthStencilImage");
	g_pvkCmdClearAttachments = (PFN_vkCmdClearAttachments)glfwGetInstanceProcAddress(instance, "vkCmdClearAttachments");
	g_pvkCmdResolveImage = (PFN_vkCmdResolveImage)glfwGetInstanceProcAddress(instance, "vkCmdResolveImage");
	g_pvkCmdSetEvent = (PFN_vkCmdSetEvent)glfwGetInstanceProcAddress(instance, "vkCmdSetEvent");
	g_pvkCmdResetEvent = (PFN_vkCmdResetEvent)glfwGetInstanceProcAddress(instance, "vkCmdResetEvent");
	g_pvkCmdWaitEvents = (PFN_vkCmdWaitEvents)glfwGetInstanceProcAddress(instance, "vkCmdWaitEvents");
	g_pvkCmdPipelineBarrier = (PFN_vkCmdPipelineBarrier)glfwGetInstanceProcAddress(instance, "vkCmdPipelineBarrier");
	g_pvkCmdBeginQuery = (PFN_vkCmdBeginQuery)glfwGetInstanceProcAddress(instance, "vkCmdBeginQuery");
	g_pvkCmdEndQuery = (PFN_vkCmdEndQuery)glfwGetInstanceProcAddress(instance, "vkCmdEndQuery");
	g_pvkCmdResetQueryPool = (PFN_vkCmdResetQueryPool)glfwGetInstanceProcAddress(instance, "vkCmdResetQueryPool");
	g_pvkCmdWriteTimestamp = (PFN_vkCmdWriteTimestamp)glfwGetInstanceProcAddress(instance, "vkCmdWriteTimestamp");
	g_pvkCmdCopyQueryPoolResults = (PFN_vkCmdCopyQueryPoolResults)glfwGetInstanceProcAddress(instance, "vkCmdCopyQueryPoolResults");
	g_pvkCmdPushConstants = (PFN_vkCmdPushConstants)glfwGetInstanceProcAddress(instance, "vkCmdPushConstants");
	g_pvkCmdBeginRenderPass = (PFN_vkCmdBeginRenderPass)glfwGetInstanceProcAddress(instance, "vkCmdBeginRenderPass");
	g_pvkCmdNextSubpass = (PFN_vkCmdNextSubpass)glfwGetInstanceProcAddress(instance, "vkCmdNextSubpass");
	g_pvkCmdEndRenderPass = (PFN_vkCmdEndRenderPass)glfwGetInstanceProcAddress(instance, "vkCmdEndRenderPass");
	g_pvkCmdExecuteCommands = (PFN_vkCmdExecuteCommands)glfwGetInstanceProcAddress(instance, "vkCmdExecuteCommands");
	g_pvkDestroySurfaceKHR = (PFN_vkDestroySurfaceKHR)glfwGetInstanceProcAddress(instance, "vkDestroySurfaceKHR");
	g_pvkGetPhysicalDeviceSurfaceSupportKHR = (PFN_vkGetPhysicalDeviceSurfaceSupportKHR)glfwGetInstanceProcAddress(instance, "vkGetPhysicalDeviceSurfaceSupportKHR");
	g_pvkGetPhysicalDeviceSurfaceCapabilitiesKHR = (PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR)glfwGetInstanceProcAddress(instance, "vkGetPhysicalDeviceSurfaceCapabilitiesKHR");
	g_pvkGetPhysicalDeviceSurfaceFormatsKHR = (PFN_vkGetPhysicalDeviceSurfaceFormatsKHR)glfwGetInstanceProcAddress(instance, "vkGetPhysicalDeviceSurfaceFormatsKHR");
	g_pvkGetPhysicalDeviceSurfacePresentModesKHR = (PFN_vkGetPhysicalDeviceSurfacePresentModesKHR)glfwGetInstanceProcAddress(instance, "vkGetPhysicalDeviceSurfacePresentModesKHR");
	g_pvkCreateSwapchainKHR = (PFN_vkCreateSwapchainKHR)glfwGetInstanceProcAddress(instance, "vkCreateSwapchainKHR");
	g_pvkDestroySwapchainKHR = (PFN_vkDestroySwapchainKHR)glfwGetInstanceProcAddress(instance, "vkDestroySwapchainKHR");
	g_pvkGetSwapchainImagesKHR = (PFN_vkGetSwapchainImagesKHR)glfwGetInstanceProcAddress(instance, "vkGetSwapchainImagesKHR");
	g_pvkAcquireNextImageKHR = (PFN_vkAcquireNextImageKHR)glfwGetInstanceProcAddress(instance, "vkAcquireNextImageKHR");
	g_pvkQueuePresentKHR = (PFN_vkQueuePresentKHR)glfwGetInstanceProcAddress(instance, "vkQueuePresentKHR");
	g_pvkGetPhysicalDeviceDisplayPropertiesKHR = (PFN_vkGetPhysicalDeviceDisplayPropertiesKHR)glfwGetInstanceProcAddress(instance, "vkGetPhysicalDeviceDisplayPropertiesKHR");
	g_pvkGetPhysicalDeviceDisplayPlanePropertiesKHR = (PFN_vkGetPhysicalDeviceDisplayPlanePropertiesKHR)glfwGetInstanceProcAddress(instance, "vkGetPhysicalDeviceDisplayPlanePropertiesKHR");
	g_pvkGetDisplayPlaneSupportedDisplaysKHR = (PFN_vkGetDisplayPlaneSupportedDisplaysKHR)glfwGetInstanceProcAddress(instance, "vkGetDisplayPlaneSupportedDisplaysKHR");
	g_pvkGetDisplayModePropertiesKHR = (PFN_vkGetDisplayModePropertiesKHR)glfwGetInstanceProcAddress(instance, "vkGetDisplayModePropertiesKHR");
	g_pvkCreateDisplayModeKHR = (PFN_vkCreateDisplayModeKHR)glfwGetInstanceProcAddress(instance, "vkCreateDisplayModeKHR");
	g_pvkGetDisplayPlaneCapabilitiesKHR = (PFN_vkGetDisplayPlaneCapabilitiesKHR)glfwGetInstanceProcAddress(instance, "vkGetDisplayPlaneCapabilitiesKHR");
	g_pvkCreateDisplayPlaneSurfaceKHR = (PFN_vkCreateDisplayPlaneSurfaceKHR)glfwGetInstanceProcAddress(instance, "vkCreateDisplayPlaneSurfaceKHR");

	return VK_SUCCESS;
}