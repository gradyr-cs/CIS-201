/*
Define a function ComputeResult() that has two integer parameters and returns the product of the two parameters minus 5.

Ex: If the input is 2 8, then the output is:

11
*/

#include <iostream>
using namespace std;

int ComputeResult(int val1, int val2){
   int result;
   
   result = (val1 * val2) - 5;
   
   return result;
}

int main() {
   int valueIn1, valueIn2;
   int result;
   
   cin >> valueIn1;
   cin >> valueIn2;
   
   result = ComputeResult(valueIn1, valueIn2);
   
   cout << result << endl;
   
   return 0;
}