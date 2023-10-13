#include <iostream>
#include <string>
#include <cctype>
using namespace std;                       

int main() {
   string inputName;
   string searchName;
   string coreGtld1;
   string coreGtld2;
   string coreGtld3;
   string coreGtld4;
   bool isCoreGtld = false;

   coreGtld1 = ".com";
   coreGtld2 = ".net";
   coreGtld3 = ".org";
   coreGtld4 = ".info";

   cout << endl << "Enter a top-level domain name: " << endl;
   cin >> inputName;

   searchName = inputName;

   // FIXME: Allow the user to enter a name with or without a leading period
   if ((searchName.size() > 0) && (searchName.at(0) != '.')) {
      searchName = "." + searchName;
   }

   // Determine whether the user-entered name is a gTLD
   if (searchName == coreGtld1) {
      isCoreGtld = true;
   }
   else if (searchName == coreGtld2) {
      isCoreGtld = true;
   }
   else if (searchName == coreGtld3) {
      isCoreGtld = true;
   }
   else if (searchName == coreGtld4) {
      isCoreGtld = true;
   }
   else {
      isCoreGtld = false;
   }

   cout << "The name \"" << inputName << "\" ";
   if (isCoreGtld) {
      cout << "is a core gTLD." << endl;
   }
   else {
      cout << "is not a core gTLD." << endl;
   }

   return 0;
}