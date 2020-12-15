#include "pch.h"
#include "utils.h"
#include <regex>

namespace Libraries
{
    bool Utils::ContainsNonAlphaNumbericChars(const char* str)
    {
        bool contains_non_alpha
            = !std::regex_match(str, std::regex("^[a-zA-Z0-9_]+$"));
        return contains_non_alpha;
    }


    bool Utils::ContainsNonAlphaNumbericChars(const std::string& str)
    {
        return ContainsNonAlphaNumbericChars(str.c_str());
    }
}