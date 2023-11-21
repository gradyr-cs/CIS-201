#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> dataVector;
   int value;
   int i;

   cin >> value;
   
   while (value > 0) {
      dataVector.push_back(value);
      cin >> value;
   }

   for (i = 0; i < dataVector.size(); ++i) {
      cout << dataVector.at(i) << endl;
   }

   return 0;
}