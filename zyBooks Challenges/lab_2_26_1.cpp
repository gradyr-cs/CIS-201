/* 
    File: main.cpp 
    Description: 2.26.1: LAB: Simple statistics
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis201
    Section#: 70107
    Date: 09-23-2023
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   int num1;
   int num2;
   int num3;
   int num4;
   // The variables below are the result of overthinking with my pseudocode...
   //int avgResult; // holds the average of the 4 inputs
   //double prodResult; // holds the result of the product
   //double prodResultAlt; // New values for floating point division - Part 2 in Lab
   //double avgResultAlt; 

   cin >> num1;
   cin >> num2;
   cin >> num3;
   cin >> num4;
/*
Notes to myself...
So I was greatly overthinking this exercise, but I will leave this here to learn from.
I dont always have to pass results into a variable and pass that into the cout.
I need to find the simplicity of the conversion in itself, working with the data I was given.
Use the variables, and manipulate them. Do not overthink the storage portion in this case.

-------------------------
   prodResult = static_cast<int>(num1 * num2 * num3 * num4);
   //cout << "***Product of the 4 ints: " << prodResult << endl; // Debug Tool #1

   avgResult = (num1 + num2 + num3 + num4) / 4; // 4 to represent the 4 num#1-4 ints
   //cout << "***Average of the 4 ints: " << avgResult << endl; // Debug Tool #2
   
   cout << fixed << setprecision(3);
   
   cout << prodResult << " " << avgResult << endl;
   
   // modified output second line / Part 2
    // set float precision to 3 after decimal

   prodResultAlt = num1 * num2 * num3 * num4;
   
   //avgResultAlt = static_cast<double>(num1 + num2 + num3 + num4) / 4;
   
   avgResultAlt = (static_cast<double>(num1 + num2 + num3 + num4) / 4.000); // Alter result for second line of output as expected per suggested output.
   cout << prodResultAlt << " " << avgResultAlt << endl; // prodResult directly converted, new double var assigned into avgResultAlt - no conversion needed.
   -------------------------
*/
   
   cout << fixed << setprecision(3); 
   
   cout << num1 * num2 * num3 * num4 << " " << static_cast<int>(num1 + num2 + num3 + num4) / 4 << endl; // This works.
   
   cout << static_cast<double>(num1) * num2 * num3 * num4 << " " << (num1 + num2 + num3 + num4) / 4.000 << endl;

   return 0;
}