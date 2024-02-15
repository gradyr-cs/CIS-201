#include <iostream>
#include <vector>
using namespace std;

int main() {
   int numValues;
   int numMatches;
   unsigned int i;

   cin >> numValues;

   // Creates a vector of size numValues and initializes all values to 0
   vector<int> hourlyMiles(numValues);

   for (i = 0; i < hourlyMiles.size(); ++i) {
      cin >>  hourlyMiles.at(i);
   }
   numMatches = 0;
   for (i = 0; i < hourlyMiles.size(); ++i) {
      if (hourlyMiles.at(i) == 0) {
        numMatches++;
      }
   }


   cout << "Number of 0s in array: " << numMatches << endl;
   
   return 0;
}