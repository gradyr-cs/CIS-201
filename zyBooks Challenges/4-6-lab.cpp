#include <iostream>
using namespace std;

int main () {

//for (i = 0; i < keyStr.size(); ++i) {
 //   if (isspace)
//}

string passwdStr;
int i;
int lengthStr;

cin >> passwdStr;
i = 0;
lengthStr = 0;

while (i != string::npos) {
   i = passwdStr.find("asdf");
    if (i != string::npos) {
        passwdStr.replace(i + 4, passwdStr.substr(i + 4).size(),passwdStr.substr(i + 4));
    }
   }
lengthStr = passwdStr.size();

cout << "Remaining string: " << passwdStr << endl;
cout << "Length: " << lengthStr << endl;

return 0;


}


