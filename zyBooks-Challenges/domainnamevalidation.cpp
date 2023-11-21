#include <iostream>
#include <string>
using namespace std;

int main() {
   string coreGtld1;
   string coreGtld2;
   string coreGtld3;
   string coreGtld4;
   string inputName;
   string searchName;
   string theTld;
   bool isCoreGtld;
   int periodCounter;
   int periodPosition;
   unsigned int j;
   unsigned int i;
      
   coreGtld1 = ".com";
   coreGtld2 = ".net";
   coreGtld3 = ".org";
   coreGtld4 = ".info";
   theTld = "";
   isCoreGtld = false;
   periodPosition = 0;

   cout << endl << "Enter the next domain name (<Enter> to exit): " << endl;
   cin >> inputName;

   while (inputName.size() > 0) {
      searchName = inputName;
      for (j = 0; j < inputName.size(); ++j) {
         searchName.at(j) = tolower(inputName.at(j));
      }
      isCoreGtld = false;

      periodCounter = 0;
      for (i = 0; i < searchName.size(); ++i) {
         if (searchName.at(i) == '.') {
            periodCounter++;
            periodPosition = i;
         }
      }

      if ((periodCounter == 1) && (searchName.at(0) != '.')) {
         // Extract the top-level domain name starting at the period's position.
         // Ex: If searchName = "example.com", the next statement extracts ".com"
         theTld = searchName.substr(periodPosition);

         if (theTld == coreGtld1) {
            isCoreGtld = true;
         }
         else if (theTld == coreGtld2) {
            isCoreGtld = true;
         }
         else if (theTld == coreGtld3) {
            isCoreGtld = true;
         }
         else if (theTld == coreGtld4) {
            isCoreGtld = true;
         }
         else {
            isCoreGtld = false;
         }
      }

      cout << "\"" << inputName << "\" ";
      if (isCoreGtld) {
         cout << "is a second-level domain followed by a core gTLD of \"" <<
                 theTld << "\"." << endl;
      }
      else {
         cout << "is not a second-level domain followed by a core gTLD." << endl;
      }

      cout << endl << "Enter the next domain name (or <Enter> to exit): " << endl;
      inputName = "";
      cin >> inputName;
   }

   return 0;
}