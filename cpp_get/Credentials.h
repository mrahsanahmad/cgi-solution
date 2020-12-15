#pragma once
#include <string>

namespace businessModels
{
    class Credentials {
        std::string m_Email;
        std::string m_Password;

    public:
        Credentials(const char* email, const char* password);

        bool IsValidEmail(const char *email);
        inline bool IsValidEmail() { return IsValidEmail(m_Email.c_str()); }

        bool IsValidPassword(const char* passw);
        inline bool IsValidPassword() { return IsValidEmail(m_Password.c_str()); }

        inline bool IsValid() { return IsValidEmail() && IsValidPassword(); }

    };
}
