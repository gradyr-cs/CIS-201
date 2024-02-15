#include <iostream>
#include <vector>
using namespace std;

int main() {
   unsigned int i;
   int initSize = 2;
   vector<int> valElements(initSize);
   int numElements;
   int begNum;
   
   valElements.at(0) = 12;
	valElements.at(1) = 39;
   
   cin >> numElements;
   cin >> begNum;

   valElements.resize(numElements);
   
   for (i = initSize; i < valElements.size(); ++i) {
      valElements.at(i) = begNum * (i + 1);
   }

   for (i = 0; i < valElements.size(); ++i) {
      cout << valElements.at(i) << " ";
   }
   cout << endl;

   return 0;
}