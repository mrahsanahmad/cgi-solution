#include <iostream>
using namespace std;

int main () {
   cout << "Content-type:text/html\r\n\r\n";
   cout << "<html>\n";
   cout << "<head>\n";
   cout << "<title>Student Record Management System</title>\n";
   cout << "</head>\n";
   cout << "<body>\n";
   cout << "<br><br><center><h2>Student Record Management System</h2>\n\n\n";
   cout << "<form action='login-admin.cgi'><button type='submit'>Login as Admin</button></form>";
   cout << "<form action='login-lect.cgi'><button type='submit'>Login as Lecturer</button></form></center>";
   cout << "</body>\n";
   cout << "</html>\n";
   
   return 0;
}
