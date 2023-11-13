#include <iostream>
#include <vector>
using namespace std;

int main() {
   int numElements;
   unsigned int i;
   vector<int> scoresList;
	vector<int> rotatedList;
   
   cin >> numElements;
   
   scoresList.resize(numElements);
	rotatedList.resize(numElements);
	
	for (i = 0; i < scoresList.size(); ++i) {
		cin >> scoresList.at(i);
	}
   //rotatedList = scoresList; // not needed since both vectors have been adjusted in size via numElements.

   int tempHolder = scoresList.back();
   
   for (i = scoresList.size() - 1; i > 0; --i) { // no if logic needed, just store, then deposit the variable after the right-side shift.
      rotatedList.at(i) = scoresList.at(i - 1);
   }
   rotatedList.at(0) = tempHolder;


   cout << "Original scores: ";
   for (i = 0; i < scoresList.size(); ++i) {
      cout << scoresList.at(i) << " ";
   }
   cout << endl;
	
	cout << "Updated scores: ";
	for (i = 0; i < rotatedList.size(); ++i) {
		cout << rotatedList.at(i) << " ";
	}
	cout << endl;
   
   return 0;
}