#include <iostream>
using namespace std;

int main() {
   char userStr[10]; // Input string
   int i;
   
   // Prompt user for string input
   cout << "Enter string (<10 chars): ";
   cin >> userStr;
   
   // Print 1 char at a time
   cout << endl;
   for (i = 0; userStr[i] != '\0'; ++i) {
      cout << userStr[i] << endl;
   }
   cout << endl;
   
   return 0;
}
