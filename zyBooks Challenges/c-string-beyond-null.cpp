/*

This program can cause a loop to print other memory locations until it locates
a null character. This is a bad thing.

*/


#include <iostream>
using namespace std;

int main() {
   char nameArr[5];

   nameArr[0] = 'A';
   nameArr[1] = 'l';
   nameArr[2] = 'a';
   nameArr[3] = 'n';
   nameArr[4] = '\0'; // Null character

   cout << nameArr << endl;

   nameArr[4] = '!';         // Oops, overwrote null char
   cout << nameArr << endl; // *Might* still work

   return 0;
}