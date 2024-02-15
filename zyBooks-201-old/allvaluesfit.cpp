#include <iostream>
using namespace std;

int main() {
   int inCount;
   bool allValid;
   int i;
   int userInput = 0;
   
   cin >> inCount;
   
   for (i = 0; i < inCount; ++i) {
      cin >> userInput;
      if ((userInput >= 100) && (userInput <= 1000)) {
         allValid = false;
         // cout << "Debug: Value " << userInput << " is " << std::boolalpha << allValid << endl;
      }
         // cout << "Debug: Value " << userInput << " is " << std::boolalpha << allValid << endl;
   }
   if (allValid) {
      cout << "All valid value(s)" << endl;
   }
   else {
      cout << "Invalid value(s)" << endl;   
   }

   return 0;
}