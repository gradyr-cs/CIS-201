/*
Write a recursive function called DrawTriangle() that outputs lines of '*' to form a right side up isosceles triangle. Function DrawTriangle() has one parameter, an integer representing the base length of the triangle. Assume the base length is always odd and less than 20. Output 9 spaces before the first '*' on the first line for correct formatting.

Hint: The number of '*' increases by 2 for every line drawn.

Ex: If the input of the program is:

3
the function DrawTriangle() outputs:

         *
        ***
Ex: If the input of the program is:

19
the function DrawTriangle() outputs:

         *
        ***
       *****
      *******
     *********
    ***********
   *************
  ***************
 *****************
*******************
Note: No space is output before the first '*' on the last line when the base length is 19.


*/

/* 
    File: main.cpp
    Description: 6.13.1: LAB: Drawing a right side up triangle
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis202
    Section#: 30402
    Date: 04-25-2024
*/

#include <iostream>
using namespace std;

/* TODO: Write recursive DrawTriangle() function here. */
void DrawTriangle(int baseLength) {
    if (baseLength == 1) {
        cout << "         *" << endl;
    } else {
        DrawTriangle(baseLength - 2);
        for (int i = 0; i < (baseLength - 1) / 2; i++) {
            cout << " ";
        }
        for (int i = 0; i < baseLength; i++) {
            cout << "*";
        }
        cout << endl;
    }
}


int main() {
   int baseLength;
   
   cin >> baseLength;
   DrawTriangle(baseLength);
   return 0;
}