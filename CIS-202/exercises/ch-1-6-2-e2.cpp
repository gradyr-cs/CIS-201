/*
Define a function PrintValue() that takes two integer parameters and outputs the sum of all negative integers starting with the first and ending with the second parameter. If no negative integers exist, sum is 0. End with a newline. The function does not return any value.

Ex: If the input is -7 1, then the output is:

-28
Note: Negative numbers are less than 0.
*/

#include <iostream>
using namespace std;

void PrintValue(int num1, int num2) {
   int sum = 0;
   for (int i = num1; i <= num2; ++i) {
      if (i < 0) {
         sum = sum + i;
      }
   }
   cout << sum << endl;
}

int main() {
   int number1;
   int number2;

   cin >> number1;
   cin >> number2;
   PrintValue(number1, number2);

   return 0;
}