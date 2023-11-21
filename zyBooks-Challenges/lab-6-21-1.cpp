/* 
    File: main.cpp 
    Description: 6.21.1: Lab training: Unit tests to evaluate your program
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis201
    Section#: 70107
    Date: 11-17-2023
*/

#include <iostream>
using namespace std;

double KiloToPounds(double kilos) {
   return (kilos * 2.204);
}

int main() {
   double kilos;
   double pounds;
   
   cin >> kilos;
   
   pounds = KiloToPounds(kilos);
   cout << pounds << " lbs" << endl;
   
   return 0;
}