#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
   int seedVal;
	int remainingKeychains;
	int minVal;
	int maxVal;
	int bowl1;
	int bowl2;
	int bowl3;

   cin >> seedVal;
	cin >> minVal;
	cin >> maxVal;
	
	cout << "Initial: 105" << endl;

   srand(seedVal);
   
   bowl1 = (rand() % (maxVal - minVal + 1)) + minVal;
   bowl2 = (rand() % (maxVal - minVal + 1)) + minVal;
   bowl3 = (rand() % (maxVal - minVal + 1)) + minVal;
   
   remainingKeychains = 105 - (bowl1 + bowl2 + bowl3);

	cout << bowl1 << endl;
	cout << bowl2 << endl;
	cout << bowl3 << endl;
	cout << "Remainder: " << remainingKeychains << endl;

   return 0;
}