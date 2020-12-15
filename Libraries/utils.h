#pragma once

#ifndef LiBRARY_UTILS_NON_SQL

#define LiBRARY_UTILS_NON_SQL
#endif


#ifdef LiBRARY_UTILS_NON_SQL

#define LiBRARY_UTILS_NON_SQL __declspec(dllexport)

#else

#define LiBRARY_UTILS_NON_SQL __declspec(dllimport)

#endif

#include <string>

namespace Libraries
{
    static class LiBRARY_UTILS_NON_SQL Utils {
    public:
        static bool ContainsNonAlphaNumbericChars(const char* str);
        static bool ContainsNonAlphaNumbericChars(const std::string& str);
    };
}