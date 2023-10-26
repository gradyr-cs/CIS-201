#include <iostream>
#include <string>
using namespace std;

int main() {
   string keyStr;
   int index;
   int lengthStr;
   
   cin >> keyStr;
   index = 0;
	lengthStr = 0;
   
   for (index = 0; (index < keyStr.length() - 1); ++lengthStr) {
         if (keyStr.find("000") != string::npos) {
            lengthStr = keyStr.find("000");
            //cout << "Debug1: lengthStr = " << lengthStr << endl;
            keyStr.replace(lengthStr, 3, "");
         }
         else {
            if (keyStr.find("000") == string::npos) {

            break;
            }
         }
      
      //cout << "Debug2: index is currently: " << index << endl;
      index++;
   }

   lengthStr = keyStr.length(); 

   cout << "Remaining string: " << keyStr << endl;
	cout << "Length: " << lengthStr << endl;
   
   return 0;
}