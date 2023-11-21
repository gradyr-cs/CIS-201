#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> myValues;
   int numVals;
   unsigned int i;
   int numElements;
   int startNum;

   cin >> numElements;
   cin >> startNum;

   myValues.resize(numElements);
   
   for (i = 0; i < myValues.size(); ++i) {
      
      myValues.at(i) = startNum * (i / 2 + 1);
   }

   for (i = 0; i < myValues.size(); ++i) {
      cout << myValues.at(i) << " ";
   }
   cout << endl;

   return 0;
}