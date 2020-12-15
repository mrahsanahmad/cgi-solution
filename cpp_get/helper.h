#pragma once
#include <string>
#include "../Libraries/utils.h"

namespace cgicc
{
    class Cgicc;
}

namespace cpp_get{

    static class Helper
    {
    public:
        static const char* GetMember(const cgicc::Cgicc& cgi, const char* name);
        class ExNonAlphaNumeric;
    };
}


class cpp_get::Helper::ExNonAlphaNumeric : public std::exception
{
public:
    inline ExNonAlphaNumeric(char const* const msg) : exception(msg) {}
};
