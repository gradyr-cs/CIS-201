/* 
    File: main.cpp 
    Description: 2.25.1: LAB: Divide input integers
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis201
    Section#: 70107
    Date: 09-23-2023
*/

#include <iostream>
using namespace std;

int main() {

   int userNum;
   int divNum;
   int newResult; // Holds new value to pass to new couts
   int newNum; // modified newResult passes into here to process next result & debug tool.

   cin >> userNum;
   cin >> divNum;

   //cout << "***DEBUG: int userNum is: " << userNum << endl; // debug tool #1
   newResult = userNum / divNum;
   cout << newResult << " ";
   newNum = newResult;
   //cout << "***DEBUG: int newNum is now: " << newNum << endl; // debug tool #2

   newResult = newNum / divNum;
   cout << newResult << " ";
   newNum = newResult;
   //cout << "***DEBUG: int newNum is now: " << newNum << endl; // debug tool #2

   newResult = newNum / divNum;
   cout << newResult << endl; // final statement ends in newline


   return 0;
}