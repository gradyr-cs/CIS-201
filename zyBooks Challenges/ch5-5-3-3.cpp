#include <iostream>
#include <vector>
using namespace std;

int main() {
   int numElements;
   int quantityThreshold;
   int indexFound;
   int i;
  
   cin >> numElements;

   vector<string> groceryList(numElements);
   vector<int> quantityList(numElements);

   for (i = 0; i < groceryList.size(); ++i) {
      cin >> groceryList.at(i);
      cin >> quantityList.at(i);
   }

   cin >> quantityThreshold;

   indexFound = -1;

   for (i = groceryList.size() - 1; i >= 0; --i) {
      if (quantityList.at(i) < quantityThreshold) {
        indexFound = i;
        cout << groceryList.at(i) << " " << quantityList.at(i) << endl;
        break;
      }
   }
   
   if (indexFound == -1) {
		cout << "No result" << endl;
	}
	else {
		cout << "last match found at # " << indexFound << endl;
	}

   return 0;
}  