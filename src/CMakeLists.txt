cmake_minimum_required(VERSION 3.15)

file(GLOB_RECURSE HEX_SRC *.cpp)
file(GLOB_RECURSE HEX_H *.hpp)

include_directories("${CMAKE_SOURCE_DIR}/src" "${Vulkan_INCLUDE_DIRS}")


add_executable(VEngine ${HEX_H} ${HEX_SRC})

target_link_libraries(VEngine glfw3 ${GLFW_STATIC_LIBRARIES} ${Vulkan_STATIC_LIBRARIES})