#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> numberVect;
   int value;
   int i;
   int n;

   cin >> value;
   while (value != -1) {
      numberVect.push_back(value);
      cin >> value;
   }

   n = numberVect.back();

   for (i = 0; i < n; ++i) {
      cout << numberVect.at(i) << endl;
   }

   return 0;
}