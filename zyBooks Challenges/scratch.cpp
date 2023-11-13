#include <iostream>
using namespace std;

int FindLowestNum() {
   int userInput;
   int lowVal;

   cin >> lowVal; // Read the first input before the loop
   while (cin >> userInput) {
      if (userInput < lowVal) {
         lowVal = userInput;
      }
   }
   
   return lowVal;
}

int main() {
   int minVal;
   
   minVal = FindLowestNum();
   
   cout << minVal << endl;
   
   return 0;
}