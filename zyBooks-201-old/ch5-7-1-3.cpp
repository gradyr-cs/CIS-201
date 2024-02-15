#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> intVect;
   int value;
   int i;

   cin >> value;
   while (value != -1) {
      intVect.push_back(value);
      cin >> value;
   }

   for (i = intVect.size() -1; i >= 0; --i) {
      if (intVect.at(i) % 2 == 0) {
         cout << intVect.at(i) << endl;
      }
   }

   return 0;
}