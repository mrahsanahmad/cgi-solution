#include "helper.h"
#include "cgicc/Cgicc.h"

namespace cpp_get
{
    const char* Helper::GetMember(const cgicc::Cgicc& cgi, const char* name)
    {
        auto member = cgi.getElement(name);
        if (member != cgi.getElements().end()) {
            const std::string& str = **member;
            if (Libraries::Utils::ContainsNonAlphaNumbericChars(str))
            {
                throw ExNonAlphaNumeric(str.c_str());
            }
        }
        return "";
    }
}