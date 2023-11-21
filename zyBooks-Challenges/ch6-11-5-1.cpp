#include <iostream>
#include <vector>
using namespace std;

bool IsSumEven(vector<int> a, int b) {
    bool result = false;
    int sumHolder = 0;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] > b) {
            sumHolder = sumHolder + a[i];
        }
    }
    if (sumHolder % 2 == 0) {
        result = true;
    }

    return result;
}

int main() {
   vector<int> inputVector;
   int size;
   int input;
   int i;
   int x;
   bool result;

   // Read the vector's size, and then the vector's elements
   cin >> size;
   for (i = 0; i < size; ++i) {
      cin >> input;
      inputVector.push_back(input);
   }

   cin >> x;

   result = IsSumEven(inputVector, x);

   if (result) {
		cout << "True, the sum of the elements that are greater than " << x << " is even." << endl;
	}
	else {
		cout << "False, the sum of the elements that are greater than " << x << " is not even." << endl;
	}

   return 0;
}