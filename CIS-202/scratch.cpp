/* 
    File: main.cpp 
    Description: Convert to reverse binary 
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
   int y = 0;
   int z = 0;
   int i = 0;
   string binReverse = "";
   string strInjector = "";
   
   cout << "Integer to Binary Converter v1." << endl;
   cout << "Enter a positive integer: ";
   
   cin >> x;

   while (x > 0) { // Algorithm to convert int to binary - (results are reversed)
      //disable following line to remove console output of preprocessing of the string injector feature
      //cout << (x % 2);
      y = x % 2; // used for binary string injector feature - capture value before update
      x = x / 2;
      // experimental procedure here - Builds string to process for binary output reversal
      strInjector = (to_string(y));
      // cout << "Debug: strInjector = " << strInjector << endl;
      binReverse = binReverse.insert(y, strInjector);
   }
   // cout << "Debug: Reversed binary value of input = " << binReverse << endl;

   z = binReverse.length() - 1;
   cout << "Binary result: ";
   for (i = z; i >= 0; --i) { // Reverse the output of the stored value
      cout << binReverse[i];
   }
   
   cout << endl;

   return 0;
}