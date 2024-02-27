#include <iostream>
using namespace std;

void SearchPattern(string inputString) {
   if (inputString.find("mis") != string::npos) {
      cout << inputString << " contains mis." << endl;
   }
   else {
      cout << inputString << " does not contain mis." << endl;
   }
}

int main() {
   int i;
   string inputString;

   cin >> inputString;

   SearchPattern(inputString);

   return 0;
}