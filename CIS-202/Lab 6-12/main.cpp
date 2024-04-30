/*
Write a recursive function called DigitCount() that takes a non-negative integer as a parameter and returns the number 
of digits in the integer. Hint: The digit count increases by 1 whenever the input number is divided by 10.

Ex: If the input is:

345
the function DigitCount() returns and the program outputs:

3
*/

/* 
    File: main.cpp
    Description: 6.11.1: 6.12.1: LAB: Count the digits
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis202
    Section#: 30402
    Date: 04-25-2024
*/

#include <iostream>
using namespace std;

/* TODO: Write recursive DigitCount() function here. */
int DigitCount(int num) {
    if (num == 0) {
        return 0;
    } else {
        return 1 + DigitCount(num / 10);
    }
}


int main() {
   int num;
   int digits;

   cin >> num;
   digits = DigitCount(num);
   cout << digits << endl;
   return 0;
}
