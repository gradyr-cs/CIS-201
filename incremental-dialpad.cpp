#include <iostream>
#include <string>
using namespace std;

int main() {
   string phoneStr;   // User input: Phone number string
   unsigned int i;    // Loop index, current element in phone number string
   char currChar;     // Current char in phone number string
   
   cout << "Enter phone number: " << endl;
   cin >> phoneStr;
   
   cout << "Numbers only: ";
   for (i = 0; i < phoneStr.size(); ++i) { // For each element
      currChar = phoneStr.at(i);
      if (((currChar >= '0') && (currChar <= '9')) || (currChar == '-')) {
         cout << currChar; // Print element as is
      }
      else if ( ((currChar >= 'a') && (currChar <= 'c')) ||
                ((currChar >= 'A') && (currChar <= 'C')) ) {
         cout << "2";
      }
      else if ( ((currChar >= 'd') && (currChar <= 'f')) ||
                ((currChar >= 'D') && (currChar <= 'F')) ) {
         cout << "3";
      }
      else if ( ((currChar >= 'g') && (currChar <= 'i')) ||
                ((currChar >= 'G') && (currChar <= 'I')) ) {
         cout << "4";
      }
      else if ( ((currChar >= 'j') && (currChar <= 'l')) ||
                ((currChar >= 'J') && (currChar <= 'L')) ) {
         cout << "5";
      }
      else if ( ((currChar >= 'm') && (currChar <= 'o')) ||
                ((currChar >= 'M') && (currChar <= 'O')) ) {
         cout << "6";
      }
      else if ( ((currChar >= 'p') && (currChar <= 's')) ||
                ((currChar >= 'P') && (currChar <= 'S')) ) {
         cout << "7";
      }
      else if ( ((currChar >= 't') && (currChar <= 'v')) ||
                ((currChar >= 'T') && (currChar <= 'V')) ) {
         cout << "8";
      }
      else if ( ((currChar >= 'w') && (currChar <= 'z')) ||
                ((currChar >= 'W') && (currChar <= 'Z')) ) {
         cout << "9";
      }
      else {
         cout << '?';
      }
   }
   
   cout << endl;
   
   return 0;
}
