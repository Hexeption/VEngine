//
// Created by Hexeption on 03/11/2019.
//

#ifndef VENGINE_VENGINEBASE_HPP
#define VENGINE_VENGINEBASE_HPP

#include <windows.h>

#include <cstdint>
#include <vector>
#include <string>
#include <iostream>

#include "vkProto.h"

class VEngineBase {
private:
    float fpsTimer = 0.0f;
    uint32_t frameCounter = 0;
    uint32_t destWidth;
    uint32_t destHeight;
    bool resizing = false;
protected:
    std::string title = "VEngine Base";
    std::string name = "vEngine";
    VkInstance instance;
public:
    static std::vector<const char *> args;
    bool prepared = false;
    uint32_t width = 1920;
    uint32_t height = 1080;
    float frameTimer = 1.0f;
    uint32_t lastFPS = 0;

    struct Settings {
        bool validation = false;
        bool fullscreen = false;
        bool vsync = false;
        bool multiSampling = true;
        VkSampleCountFlagBits sampleCount = VK_SAMPLE_COUNT_4_BIT;
    } settings;

    GLFWwindow *window;

    VEngineBase();

    virtual ~VEngineBase();

    void initVulkan();

    GLFWwindow *setupWindow();

    virtual VkInstance createInstance(bool enableValidation);

    virtual void setupFrameBuffer();

    virtual void prepare();

    void initSwapchain();
    void setupSwapchain();


};


#endif //VENGINE_VENGINEBASE_HPP
