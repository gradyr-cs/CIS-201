#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   int numVals;
   double inputVal;
   double largestVal;
   int i;

   cin >> numVals;

   largestVal = inputVal;
   
   for (i = 0; i < numVals; ++i) {
      cin >> inputVal;
      if (i == 0) {
         largestVal = inputVal;   
      }
      cout << "Value read: " << inputVal << endl;
      if (inputVal > largestVal) {
               largestVal = inputVal;
      }
   }
   
   cout << "Largest: " << largestVal << endl;

   return 0;
}