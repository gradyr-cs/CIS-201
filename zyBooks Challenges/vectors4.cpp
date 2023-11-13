#include <iostream>
#include <vector>
using namespace std;

int main() {
   int numStudents;
   int i;

   cin >> numStudents;
   vector<int> swimmingListings(numStudents);

   for (i = 0; i < swimmingListings.size(); ++i) {
      cin >> swimmingListings.at(i);
   }
   for (i = 0; i < swimmingListings.size(); ++i) {
      if ((i % 2) != 1) { // check for EVEN indices
         cout << swimmingListings.at(i) << ", ";
      }
   }
   cout << endl;
   
   for (i = 0; i < swimmingListings.size(); ++i) {
      if ((i % 2) == 1) { // check for ODD indices
         cout << swimmingListings.at(i) << ", ";
      }
   }
   cout << endl;
   return 0;
}