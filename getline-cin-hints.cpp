#include <iostream>
#include <string>
using namespace std;

int main() {
   string listName;
   string listItem1;
	string listItem2;
	string listItem3;
  
   
   getline(cin, listName);
   
   cin >> listItem1;
   cin >> listItem2;
   cin >> listItem3;
   

   cout << listName << ":" << endl;
	cout << listItem1 << endl;
	cout << listItem2 << endl;
	cout << listItem3 << endl;
	
   return 0;
}