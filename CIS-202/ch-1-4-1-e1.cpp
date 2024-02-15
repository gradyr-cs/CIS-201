/*
Complete the function ConvertToCentimeters() that takes one integer parameter as a length in inches. The function returns a double as the length converted to centimeters, given that 1 inch = 2.54 centimeters.

Ex: If the input is 26, then the output is:

66.04 centimeters
*/

#include <iostream>
using namespace std;

double ConvertToCentimeters(int numInches) {
   double result;
   result = numInches * 2.54; //establish the cm value
   
   return result;
}

int main() {
   int inches;
   
   cin >> inches;

   cout << ConvertToCentimeters(inches);
	cout << " centimeters" << endl;
   
   return 0;
}