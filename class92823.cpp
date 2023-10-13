#include <iostream>
#include <string>
using namespace std;

int main() {
   string userInput;
	int idx1;
	int idx2;

   getline(cin, userInput);
	cin >> idx1;
	cin >> idx2;
   
   userInput.at(idx1) = userInput.at(idx2);

   cout << userInput << endl;

   return 0;
}