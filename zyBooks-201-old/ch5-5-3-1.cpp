#include <iostream>
#include <vector>
using namespace std;

int main() {
   int dataSize;
   unsigned int i;
   
   cin >> dataSize;

   vector<string> foodList(dataSize);
   vector<int> barcodeList(dataSize);
   
   for (i = 0; i < foodList.size(); ++i) {
      cin >> foodList.at(i);
      cin >> barcodeList.at(i);
   }
  
   
   for (i = 0; i < foodList.size(); ++i) {
      cout << "Food: " << foodList.at(i) << ", ";
      cout << "Barcode: " << barcodeList.at(i) << endl;
   }
    
   return 0;
}