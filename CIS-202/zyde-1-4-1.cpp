/*
zyDE 1.4.1: Temperature conversion.
Complete the program by writing and calling a function that converts a temperature from 
Celsius into Fahrenheit using the formula:
Fahrenheit = 9/5 * Celsius + 32
*/

#include <iostream>
using namespace std;


double C2F(double tempC) {
   double result;
   result = (tempC * 9 / 5) + 32;
   return result;
}


int main() {
   double tempF;
   double tempC;

   cout << "Enter temperature in Celsius: " << endl;
   cin >> tempC;

   tempF = C2F(tempC);

   cout << "Fahrenheit: " << tempF; 

   return 0;
}