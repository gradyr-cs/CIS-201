#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> valElements(5);
   int valElementsSize = valElements.size();
   int numRemoved;
   int i;
   
   valElements.at(0) = 11;
	valElements.at(1) = 9;
	valElements.at(2) = 7;
	valElements.at(3) = 8;
	valElements.at(4) = 10;
   
   cin >> numRemoved;
   
   cout << "Vector start ";
	for (i = 0; i < valElements.size(); ++i) {
      cout << valElements.at(i) << " ";
   }
	cout << "Vector end" << endl;

   valElements.resize(valElements.size() - numRemoved);

   cout << "Vector start ";
	for (i = 0; i < valElements.size(); ++i) {
      cout << valElements.at(i) << " ";
   }
	cout << "Vector end" << endl;

   return 0;
}