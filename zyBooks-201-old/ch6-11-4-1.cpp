#include <iostream>
using namespace std;

int GetLastIndex(string inputString, char x) {
   for (int i = inputString.size() - 1; i >= 0; --i) {
      if (inputString.at(i) == x) {
         return i;
      }
      else {
         
      }
   }
   return -1;
}

int main() {
   string inString;
   char x;
   int result;

   cin >> inString;
   cin >> x;

   result = GetLastIndex(inString, x);

   cout << result << endl;

   return 0;
}