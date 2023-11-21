#include <iostream>
#include <string>
using namespace std;

int main() {
   string keyStr;
   unsigned int i;
   
   getline(cin, keyStr);

   for (i = 0; (i < keyStr.length() -1); ++i) {
      if ( !isalpha(keyStr.at(i)) && !isdigit(keyStr.at(i))) {
         keyStr.at(i) = 'y';
      }
   }

   cout << "Updated password: " << keyStr << endl;
   
   return 0;
}