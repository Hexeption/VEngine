
#include "VEngineBase.hpp"

class VEngineTest : public VEngineBase {
public:
    VEngineTest() : VEngineBase() {

    }

    ~VEngineTest() {

    }
};

VEngineTest *vEngineTest;

int main(const int argc, const char *argv[]) {
    for (size_t i = 0; i < argc; i++) {
        VEngineTest::args.push_back(argv[i]);
    }
    vEngineTest = new VEngineTest();
    vEngineTest->initVulkan();
    vEngineTest->setupWindow();
    vEngineTest->prepare();
    while (!glfwWindowShouldClose(vEngineTest->window)) {
        glfwPollEvents();
    }
    return 0;
}