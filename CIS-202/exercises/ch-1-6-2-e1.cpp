/*
Define a function OutputVal() that takes two integer parameters and outputs the product of all integers starting with the first and ending with the second parameter, followed by a newline. The function does not return any value.

Ex: If the input is 3 7, then the output is:

2520
Note: Assume the first integer parameter is less than the second.
*/

#include <iostream>
using namespace std;

void OutputVal(int num1, int num2) {
   int sum = num1;
   for (int i = num1 + 1; i <= num2; ++i) {
      sum = sum * i;
   }
   cout << sum << endl;
}

int main() {
   int num1;
   int num2;

   cin >> num1;
   cin >> num2;
   OutputVal(num1, num2);

   return 0;
}