#include <iostream>
#include <vector>
using namespace std;

void InspectValues(string a, char b, vector<bool>& c) { //vector is now linked
   c.resize(a.size());
   for (int i = 0; i < a.size(); ++i) {
      if (a.at(i) == b) {
         c[i] = true;
      }
      else {
         c[i] = false;
      }
   }
}

int main() {
   string inputString;
   int i;
   char x;
   vector<bool> results;
   
   cin >> inputString;
   cin >> x;

   InspectValues(inputString, x, results);

   for (i = 0; i < results.size(); ++i) {
      if (results.at(i)) {
         cout << inputString.at(i) << " is equal to " << x << endl;
      }
      else {
         cout << inputString.at(i) << " is not equal to " << x << endl;
      }
   }

   return 0;
}