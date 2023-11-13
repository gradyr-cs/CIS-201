#include <iostream>
#include <vector>
using namespace std;

int main() {
   int vecVals;
   int i;

   cin >> vecVals;

   // Creates a vector of size vecVals and initializes all values to 0
   vector<int> hourlyScores(vecVals);

   for (i = 0; i < hourlyScores.size(); ++i) {
      cin >> hourlyScores.at(i);
   }

   
   for (i = hourlyScores.size() / 2 - 1; i >= 0; --i) {
      if (i > 0) {
         cout << hourlyScores.at(i) << " * ";
      }
      else {
         cout << hourlyScores.at(i);
      }
   }

   cout << endl;

   return 0;
}