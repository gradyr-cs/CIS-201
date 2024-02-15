#include <iostream>
using namespace std;

int main() {
   int age1;
   int age2;
   int* agePointer;

   cin >> age1;
   cin >> age2;
   if (age1 > age2) {
      agePointer = &age1;
   }
   else if (age2 > age1) {
      agePointer = &age2;
   }
   else {
      agePointer = nullptr;
   }

   if (agePointer == nullptr) {
      cout << "The ages are the same." << endl;
   }
   else {
      cout << *agePointer << " is the older age." << endl;
      
      if (agePointer == &age1) {
         cout << "agePointer points to age1." << endl;
      }
      if (agePointer == &age2) {
         cout << "agePointer points to age2." << endl;
      }
   }

   return 0;
}