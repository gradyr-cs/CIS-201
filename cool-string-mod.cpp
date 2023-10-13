#include <iostream>
#include <string>
using namespace std;

int main() {
   string userInput;
   
   getline(cin, userInput);
   
   if (userInput.at(userInput.size() -1) == '?') {
      cout << "A question" << endl;
   }
   else {
      cout << "Not a question" << endl;
   }
   
   return 0;
}