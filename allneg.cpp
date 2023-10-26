#include <iostream>
using namespace std;

int main() {
   int valCount;
   bool allNegative = true;
   int i;
   int userVal;
   
   cin >> valCount;
   
   for (i = 0; i < valCount; ++i) {
      cin >> userVal;
      if (userVal >= 0) {
         allNegative = false;
      }
      
   }

   if (allNegative) {
      cout << "All match" << endl;
   }
   else {
      cout << "Not all match" << endl;
   }

   return 0;
}