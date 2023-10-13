#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
   string userString;
   bool containsLowercase;
   
   getline(cin, userString);

   if ( (islower(userString[0])) || (islower(userString[1])) ) {
      containsLowercase = true;
   }
   else {
      containsLowercase = false;
   }
    
   
   if (containsLowercase) {
      cout << "String is valid" << endl;
   }
   else {
      cout << "String is not valid" << endl;
   }

   return 0;
}