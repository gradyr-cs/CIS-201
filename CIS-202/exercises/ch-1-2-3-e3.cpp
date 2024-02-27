/*
Define a function PrintDifferenceOf2() that has two integer parameters, and outputs "Result: " followed by the result of subtracting the first parameter by the second parameter. End with a newline. PrintDifferenceOf2() should not return any value.

Ex: If the input is 1 -24, then the output is:

Result: 25
Note: The calculation to find the difference of two values x and y is (x - y).
*/

#include <iostream>
using namespace std;

void PrintDifferenceOf2(int a, int b) {
   int result;
   
   result = a - b;
   
   cout << "Result: " << result << endl;
   
   
}

int main() {
   int a;
   int b;

   cin >> a;
   cin >> b;

   PrintDifferenceOf2(a, b);

   return 0;
}