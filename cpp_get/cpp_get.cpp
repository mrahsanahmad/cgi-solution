#include <iostream>
#include <vector>
#include <string>

#include "cgicc/Cgicc.h"
#include "cgicc/HTTPHTMLHeader.h"
#include "cgicc/HTMLClasses.h"

#include "helper.h"
#include "LoginManager.h"
#include "User.h"
#include "defines.h"
#include "cpp_get.h"

using namespace std;
using namespace cgicc;

inline bool UnEqualStrings(const char* one, const char* two) { return std::strcmp(one, two) != 0; }

//namespace cpp_get {
    
    int main(int argc, char** argv)
    {
        try {
            Cgicc cgi;

            // Send HTTP header
            cout << HTTPHTMLHeader() << endl;

            // Set up the HTML document
            cout << html() << head(title("cgicc get")) << endl;
            cout << body() << endl;

            // Print out the submitted element
            try {
                const char *name = cpp_get::Helper::GetMember(cgi, "fname");
                const char* lastname = cpp_get::Helper::GetMember(cgi, "lname");
                const char* loginAs = cpp_get::Helper::GetMember(cgi, LOGIN_AS);

                using User = businessModels::User;
                User user = cpp_get::LoginManager::FindExistUser(name, lastname);

                if (user.IsInvalid())
                {
                    cout << "No such user found" << endl;
                }
                else if (user.GetType() == User::ADMIN && UnEqualStrings(loginAs,LOGIN_AS_ADMIN) ||
                    user.GetType() == User::LECTURER && UnEqualStrings(loginAs, LOGIN_AS_LECTURER))
                {
                    cout << "You are trying to login as " << loginAs << " which you are not" << endl;
                }
                else
                {
                    cpp_get::LoginManager::AcceptLogin(user);
                    cpp_get::LoginManager::DisplayWelcomePage();
                }
            }
            catch (cpp_get::Helper::ExNonAlphaNumeric& ex)
            {
                std::cout << "Dont mess with me" << endl;
            }

            // Close the HTML document
            cout << body() << html();
        }
        catch (exception& e) {
            // handle any errors - omitted for brevity
            return 1;
        }
        return 0;
    }
//}