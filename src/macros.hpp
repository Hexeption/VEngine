//
// Created by Hexeption on 03/11/2019.
//

#ifndef VENGINE_MACROS_HPP
#define VENGINE_MACROS_HPP

#include <vulkan/vulkan.h>

#define VK_CHECK_RESULT(f)                                                                                \
{                                                                                                        \
    VkResult res = (f);                                                                                    \
    if (res != VK_SUCCESS)                                                                                \
    {                                                                                                    \
        std::cout << "Fatal : VkResult is \"" << res << "\" in " << __FILE__ << " at line " << __LINE__ << std::endl; \
        assert(res == VK_SUCCESS);                                                                        \
    }                                                                                                    \
}
#endif


#endif //VENGINE_MACROS_HPP
