#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> dataVect;
   int value;
   int i;

   cin >> value;
   while (value != 0) {
      dataVect.push_back(value);
      cin >> value;
   }

   for (i = 0; i < dataVect.size(); ++i){
      if (dataVect.at(i) != dataVect.back()) {
         cout << dataVect.at(i) << endl;
      }
      else {
         cout << "SKIP" << endl;
      }
   }

   return 0;
}