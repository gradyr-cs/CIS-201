#include <iostream>
#include <vector>
using namespace std;

int main() {
   int numPeople;
   unsigned int i;

   cin >> numPeople;
   vector<int> bikingListings(numPeople);

   for (i = 0; i < bikingListings.size(); ++i) {
      cin >> bikingListings.at(i);
   }

   for (i = 0; i < bikingListings.size(); ++i) {
      if ((bikingListings.at(i) % 2) != 0) {
         cout << bikingListings.at(i) << endl;
      }
      else {
      }
   }

   return 0;
}