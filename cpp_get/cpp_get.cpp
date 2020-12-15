#include <iostream>
#include <vector>
#include <string>

#include "cgicc/Cgicc.h"
#include "cgicc/HTTPHTMLHeader.h"
#include "cgicc/HTMLClasses.h"

#include "helper.h"

using namespace std;
using namespace cgicc;

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
                const char* member = "";
                member = cpp_get::Helper::GetMember(cgi, "name");
                std::cout <<"member name is "<< member << endl;
            }
            catch (cpp_get::Helper::ExNonAlphaNumeric& ex)
            {
                std::cout << "Dont mess with me" << endl;
            }

            form_iterator name = cgi.getElement("name");
            if (name != cgi.getElements().end()) {
                cout << "Your name: " << **name << endl;
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