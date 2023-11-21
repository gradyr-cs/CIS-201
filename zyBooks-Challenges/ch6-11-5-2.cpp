#include <iostream>
#include <vector>
using namespace std;

void SwapFrontEnd(vector<int>& a) {
    int tempSwap;
    tempSwap = a[0];
    a[0] = a.back();
    a.pop_back(); // kill the extra entry...
    a.push_back(tempSwap);
}

int main() {
   int i;
	vector<int> inputVector;
	int size;
	int input;

	cin >> size;
	for (i = 0; i < size; ++i) {
		cin >> input;
		inputVector.push_back(input);
	}

   SwapFrontEnd(inputVector);

	for (i = 0; i < inputVector.size(); ++i) {
		cout << inputVector.at(i) << endl;
	}

   return 0;
}