//
// Created by Hexeption on 03/11/2019.
//


#include "VEngineBase.hpp"

std::vector<const char *> VEngineBase::args;

VEngineBase::VEngineBase() {
    char *numConvPtr;

    // Parse command line arguments
    for (size_t i = 0; i < args.size(); ++i) {
        if (args[i] == std::string("-validation")) {
            settings.validation = true;
        }
        if (args[i] == std::string("-vsync")) {
            settings.vsync = true;
        }
        if (args[i] == std::string("-f") || args[i] == std::string("--fullscreen")) {
            settings.fullscreen = true;
        }
        if (args[i] == std::string("-w") || args[i] == std::string("--width")) {
            uint32_t w = strtol(args[i + 1], &numConvPtr, 10);
            if (numConvPtr != args[i + 1]) {
                width = w;
            }
        }
        if (args[i] == std::string("-h") || args[i] == std::string("--height")) {
            uint32_t h = strtol(args[i + 1], &numConvPtr, 10);
            if (numConvPtr != args[i + 1]) {
                width = h;
            }
        }
    }

    // Create Console
    AllocConsole();
    AttachConsole(GetCurrentProcessId());
    FILE *stream;
    freopen_s(&stream, "CONOUT$", "w+", stdout);
    freopen_s(&stream, "CONOUT$", "w+", stderr);
    SetConsoleTitle(TEXT("Vulkan validation output"));
}

VEngineBase::~VEngineBase() {

}

void VEngineBase::initVulkan() {

}

VkInstance VEngineBase::createInstance(bool enableValidation) {

    this->settings.validation = enableValidation;

#if defined(_VALIDATION)
    this->settings.validation = true;
#endif

    VkApplicationInfo appInfo = {};
    appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
    appInfo.pApplicationName = name.c_str();
    appInfo.pEngineName = name.c_str();
    appInfo.apiVersion = VK_API_VERSION_1_0;

    std::vector<const char *> instanceExtensions = {VK_KHR_SURFACE_EXTENSION_NAME};

#if defined(_WIN32)
    instanceExtensions.push_back(VK_KHR_SURFACE_EXTENSION_NAME);
#endif

    VkInstanceCreateInfo instanceCreateInfo = {};
    instanceCreateInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    instanceCreateInfo.pNext = NULL;
    instanceCreateInfo.pApplicationInfo = &appInfo;
    if (instanceExtensions.size() > 0) {
        if (settings.validation) {
            instanceExtensions.push_back(VK_EXT_DEBUG_REPORT_EXTENSION_NAME);
        }
        instanceCreateInfo.enabledExtensionCount = (uint32_t) instanceExtensions.size();
        instanceCreateInfo.ppEnabledExtensionNames = instanceExtensions.data();
    }
    if (settings.validation) {
        instanceCreateInfo.enabledLayerCount = 1;
        const char *validationLayerNames[] = {
                "VK_LAYER_LUNARG_standard_validation"
        };
        instanceCreateInfo.ppEnabledLayerNames = validationLayerNames;
    }

    PFN_vkCreateInstance pfnVkCreateInstance = (PFN_vkCreateInstance) glfwGetInstanceProcAddress(NULL,
                                                                                                 "vkCreateInstance");
    pfnVkCreateInstance(&instanceCreateInfo, nullptr, &instance);
    loadVKFuncs(instance);

    return instance;
}


GLFWwindow *VEngineBase::setupWindow() {
    glfwInit();

    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    GLFWwindow *window = glfwCreateWindow(width, height, "FastCraft", NULL, NULL);

    if (nullptr == window) {
        std::cout << "Failed to create GLFW Window" << std::endl;
        glfwTerminate();
    }

    this->window = window;

    return window;
}

void VEngineBase::prepare() {
    /*
     * Swapchain
     */
    initSwapchain();
    setupSwapchain();
}

void VEngineBase::initSwapchain() {

}

void VEngineBase::setupSwapchain() {

}

