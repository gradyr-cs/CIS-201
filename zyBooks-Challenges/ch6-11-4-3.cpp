#include <iostream>
using namespace std;

void EndsWith(string a, string b) {
   // Check if substr b is present, aka != to string::npos, AND if the substring of a at index position
   // of a's total size minus the size of b equals the string held in b upon activating the function
   // then follow the logical branches
   if (a.find(b) != string::npos && a.substr(a.size() - b.size()) == b) {
      cout << a << "??" << b << endl;
   }
   else {
      cout << "No match." << endl;
   }
}
int main() {
   int i;
   string inputString1;
   string inputString2;

   cin >> inputString1;
   cin >> inputString2;

   EndsWith(inputString1, inputString2);

   return 0;
}