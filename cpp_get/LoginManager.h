#pragma once

#include <string>
#include "User.h"

namespace cpp_get {

    static class LoginManager
    {
    public:
        static const businessModels::User FindExistUser(const char* fname, const char* lastname);

        static void AcceptLogin(businessModels::User& user);

        static void DisplayWelcomePage();
    };
}


