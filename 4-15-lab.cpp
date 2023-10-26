/* 
    File: main.cpp 
    Description: 4.15.1: LAB: Count characters
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis201
    Section#: 70107
    Date: 10-21-2023
*/

#include <iostream>
#include <string>
using namespace std;

char searchVal;
string userVal;
int userLength = 0;
int i;
int matchResults = 0;
int main() {

   cin >> searchVal;
   cin.ignore(); // prevent cin from getting hung and bypassing getline - Can also cin.ignore(1, '\n')  see docs...
   getline(cin, userVal);

   userLength = (userVal.length() -1);

   for (i = 0; i < userLength; ++i) { // scan word based on length, looping through the index cycle
       if (userVal[i] == searchVal) {
          matchResults++; // feed index match hits into the tally
       }
   }
   
   if (matchResults == 1) { // adds plural output to the result if != 1
      cout << matchResults << " " << searchVal << endl;
   }
   else {
      cout << matchResults << " " << searchVal << "'s" << endl;
   }

   return 0;
}