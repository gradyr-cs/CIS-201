#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
   string inputString;
   bool isValid;
   
   getline(cin, inputString);
   
   if ((isalpha(inputString[0])) && (isalpha(inputString[1])) && (isalpha(inputString[2]))) {
      isValid = true;
   }
   else {
      isValid = false;
   }
      
      
   if (isValid) {
      cout << "String is valid" << endl;
   }
   else {
      cout << "String is not valid" << endl;
   }

   return 0;
}