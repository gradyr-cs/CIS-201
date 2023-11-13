#include <iostream>
#include <vector>
using namespace std;

int main() {
   int numInputs;
   unsigned int i;

   cout << "Enter the size of the vector: ";
   cin >> numInputs;

   // Creates a vector of size numInputs and initializes all values to 0
   vector<int> averageMiles(numInputs);

   for (i = 0; i <= averageMiles.size() / 2 - 1; ++i) {
      cout << "Debug: index position is: " << i << endl;
      cout << "Enter a value: " << endl;
      cin >> averageMiles.at(i);
   }
   
   for (i = 0; i < averageMiles.size(); ++i) {
      cout << averageMiles.at(i) << " ";
   }

   return 0;
}