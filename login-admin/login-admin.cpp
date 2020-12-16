#include <iostream>
#include <cpp_get/defines.h>
using namespace std;

int main () {
   cout << "Content-type:text/html\r\n\r\n";
   cout << "<html>\n";
   cout << "<head>\n";
   cout << "<title>Student Record Management System</title>\n";
   cout << "</head>\n";
   cout << "<body>\n";
   cout << "<br><br><center><h2>Login as Adminstrator</h2><br><br>";
   cout<< "<form action = '/cgi-bin/cpp_get.cgi' method = 'get'>";
   cout<< "First Name: <input type = 'text' name = 'first_name'>  <br /><br>";
   cout << "Last Name: <input type = 'text' name = 'last_name' /><br><br>";
   cout << "<input type = 'hidden' name = '"<<LOGIN_AS<<"' value = '"<<LOGIN_AS_ADMIN<<"><br><br>";
   cout << "<input type = 'submit' value = 'Submit' /><br><br>";
   cout << "</form></center>";
   cout << "</body>\n";
   cout << "</html>\n";
   
   return 0;
}
