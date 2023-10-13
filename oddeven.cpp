#include <iostream>
using namespace std;

int main() {
   int userNum;
   int divRemainder;
   // acts funny with decimals - tends to round the number down.
   cout << "Enter a number: ";
   cin  >> userNum;

   divRemainder = userNum % 2;

   if (divRemainder == 0) {
       cout << userNum << " is even." << endl;
   }
   else {
       cout << userNum << " is odd." << endl;
   }

   return 0;
}