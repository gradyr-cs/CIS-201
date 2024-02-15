/*
This program contains string location memory access errors...

This common error loops for the string's array size rather than stopping at the null character 
aka '\0'

Even worse, you can loop beyond the last valid element and access memory locations that are
not part of the array.

output can vary by machine and particular compiler.

*/

#include <iostream>
using namespace std;

int main() {
   char userStr[20] = "1234567890123456789"; // Input string
   int i; 
   
   // Prompt user for string input
   cout << "Enter string (<20 chars): ";
   cin >> userStr;
   
   // Print string
   cout << endl << userStr << endl;
   
   // Look for '@'
   for (i = 0; userStr[i] != '\0'; ++i) {
      if (userStr[i] == '@') {
         cout << "Found '@'." << endl;
      }
   }
   cout << endl;
   
   
   // The following is an ERROR.
   // May print chars it shouldn't.
   // Problem: doesn't stop at null char.
   cout << "\""; // Print opening "
   for (i = 0; i < 20; ++i) { // Print each char
      cout << userStr[i];
   }
   cout << "\"" << endl;      // Print closing "
   
   
   // The following is an even WORSE ERROR.
   // Accesses beyond valid index range.
   // Program may crash.
   cout << "\""; // Print opening "
   for (i = 0; i < 30; ++i) {
      cout << userStr[i];
   }
   cout << "\"" << endl; // Print closing "
   
   return 0;