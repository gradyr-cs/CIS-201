#include <iostream>
using namespace std;

int main() {
   string codeStr;
   bool isValidPasswd = false;
   int i;
   int letterCount = 0;

   getline(cin, codeStr);
   
   for (i = 0; i < codeStr.size(); ++i) {
      if ( isalpha(codeStr.at(i))) {
      letterCount++;
      }
   isValidPasswd = (letterCount < 7 && codeStr.size() >= 7);
    }
   
   
   

   if (isValidPasswd) {
      cout << "Valid" << endl;
   }
   else {
      cout << "Invalid" << endl;
   }
   
   return 0;
}