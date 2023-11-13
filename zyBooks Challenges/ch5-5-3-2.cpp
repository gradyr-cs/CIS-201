#include <iostream>
#include <vector>
using namespace std;

int main() {
   int inputSize;
   string merchandiseAsked;
   unsigned int i;

   cin >> inputSize;

   vector<string> merchandiseList(inputSize);
   vector<int> barcodeList(inputSize);

   for (i = 0; i < merchandiseList.size(); ++i) {
      cin >> merchandiseList.at(i);
      cin >> barcodeList.at(i);
   }

   cin >> merchandiseAsked;

   for (i = 0; i < merchandiseList.size(); ++i) {
      if (merchandiseList.at(i) == merchandiseAsked) {
         cout << "The merchandise " << merchandiseAsked << " has value " << barcodeList.at(i) << ", found at index " << i << endl;
      }
   }

   return 0;
}