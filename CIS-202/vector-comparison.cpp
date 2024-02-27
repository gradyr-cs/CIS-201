#include <iostream>
#include <vector>
using namespace std;

bool IsTwice(vector<int> inputVector1, vector<int> inputVector2) {
   if ((inputVector1.size()) == (inputVector2.size())) {
      for (int i = 0; i < inputVector1.size(); ++i) {
         if (!(inputVector1.at(i) == (inputVector2.at(i) * 2))) {
            return false;
         }
      }
   }
   else {
      return false;
   }
   return true;
}

int main() {
   int i;
	vector<int> inputVector1;
	vector<int> inputVector2;
	int size;
	int input;
	bool checkProperty;

	cin >> size;
	for (i = 0; i < size; ++i) {
		cin >> input;
		inputVector1.push_back(input);
	}

	cin >> size;
	for (i = 0; i < size; ++i) {
		cin >> input;
		inputVector2.push_back(input);
	}

   checkProperty = IsTwice(inputVector1, inputVector2);

	if (checkProperty) {
		cout << "True, the first vector is twice the second vector." << endl;
	}
	else {
		cout << "False, the first vector is not twice the second vector." << endl;
	}

   return 0;
}