/* 
    File: main.cpp 
    Description: 4.14.1: LAB: Convert to reverse binary
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis201
    Section#: 70107
    Date: 10-21-2023
*/

#include <iostream>
#include <string>
using namespace std;

int main() {

   int x = 0;
   // Enable next 3 int vars for added features - see notes
   // int y = 0;
   // int z = 0;
   // int i = 0;
   string binReverse = "";
   string strInjector = "";
   
   // Prompt disabled for ZYLab's output checker
   // cout << "Enter a positive integer: ";
   
   cin >> x;

   while (x > 0) { // Algorithm to convert int to binary
      cout << (x % 2);
      // y = x % 2; // used for binary string injector feature - capture value before update
      x = x / 2;
      
      // experimental procedure here - Builds string to process for binary output reversal
      /*
      strInjector = (to_string(y));
      cout << "Debug: strInjector = " << strInjector << endl;
      binReverse = binReverse.insert(y, strInjector);

      */
   }
   
   /*
   // Binary order fixing tool 

   // Debug tools below
   // cout << "Debug: string binReverse is currently == " << binReverse << endl;
   // cout << "Debug: above var length is " << binReverse.length() - 1 << endl;

   z = binReverse.length() - 1;

   for (i = z; i >= 0; --i) {
      cout << binReverse[i];
   }
   */
   cout << endl;

   return 0;
}