#include <iostream>
#include <vector>
using namespace std;

int main() {
   // Define the list of valid core gTLDs
   const int NUM_ELEMENTS_CORE = 4;
   vector<string> validCoreGtld(NUM_ELEMENTS_CORE);
   const int NUM_ELEMENTS_RSTR = 3;
   vector<string> validRestrictedGtld(NUM_ELEMENTS_RSTR);
   string  inputName;
   string  searchName;
   string  theGtld;
   bool isValidDomainName;
   bool isCoreGtld;
   bool isRestrictedGtld;
   int periodCounter;
   int periodPosition;
   unsigned int i;

   validCoreGtld.at(0) = ".com";
   validCoreGtld.at(1) = ".net";
   validCoreGtld.at(2) = ".org";
   validCoreGtld.at(3) = ".info";
   validRestrictedGtld.at(0) = ".biz";
   validRestrictedGtld.at(1) = ".name";
   validRestrictedGtld.at(2) = ".pro";

   cout << endl << "Enter the next domain name (-1 to exit): " << endl;
   cin >> inputName;

   while (inputName != "-1") {
      searchName = inputName;
      for (i = 0; i < inputName.size(); ++i) {
         searchName[i] = tolower(inputName[i]);
      }
      theGtld = "";
      isValidDomainName = false;
      isCoreGtld        = false;
      isRestrictedGtld  = false;

      // Count the number of periods in the domain name
      periodCounter = 0;
      periodPosition = 0;

      for (i = 0; i < searchName.size(); ++i) {
         if (searchName[i] == '.') {
            ++periodCounter;
            periodPosition = i;
         }
      }

      // If there is exactly one period that is not at the start
      // or end of searchName, check if the TLD is a core gTLD or a restricted gTLD
      if ((periodCounter == 1) && (searchName[0] != '.') &&
          (searchName[searchName.size() - 1] != '.')) {
         isValidDomainName = true;
      }
      if (isValidDomainName) {
         // Extract the Top-level Domain name starting at the period's position.
         // Ex: If searchName = "example.com", the next statement extracts ".com"
         theGtld = searchName.substr(periodPosition);

         i = 0;
         while ((i < validCoreGtld.size()) && (!isCoreGtld)) {
            if(theGtld == validCoreGtld.at(i)) {
               isCoreGtld = true;
            }
            else {
               ++i;
            }
         }
            
         i = 0;
         while ((i < validRestrictedGtld.size()) && (!isRestrictedGtld)) {
            if(theGtld == validRestrictedGtld.at(i)) {
               isRestrictedGtld = true;
            }
            else {
               ++i;
            }
         }
        
      }

      cout << "\"" << inputName << "\" ";
      if (isValidDomainName) {
         cout << "is a valid domain name and ";
         if (isCoreGtld) {
            cout << "has a core gTLD of \"" << theGtld << "\"." << endl;
         }
         else if (isRestrictedGtld) {
            cout << "has a restricted gTLD of \"" << theGtld << "\"." << endl;
         }
         else {
            cout << "does not have a core or restricted gTLD." << endl;
         }
      }
      else {
         cout << "is not a valid domain name." << endl;
      }

      cout << endl << "Enter the next domain name (-1 to exit): " << endl;
      cin >> inputName;
   }

   return 0;
}