#include <iostream>
using namespace std;

void ReplaceAge(int* agePointer, int ageValue) {

   if (agePointer == nullptr) {
      cout << "agePointer is null." << endl;
   }
   else {
      *agePointer = ageValue;
   }

}

int main() {
   int age;
   int* agePointer;
   char action;
   int value;

   age = 0;
   cin >> action;
   cin >> value;

   if (action == 'Y') {
      agePointer = &age;
   }
   else {
      agePointer = nullptr;
   }
  
   ReplaceAge(agePointer, value);
	cout << "Age is " << age << "." << endl;

   return 0;
}