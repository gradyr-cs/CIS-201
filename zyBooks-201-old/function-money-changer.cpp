
#include <iostream>
using namespace std;

// FIXME: Add parameters for dimes, nickels, and pennies. 
void ComputeChange(int totCents, int& numQuarters, int& numDimes, int& numNickels) {

   // cout << "FIXME: Finish writing ComputeChange" << endl;

   numQuarters = totCents / 25;
   numDimes = totCents / 10;
   numNickels = totCents / 5;
}

int main() {
   int userCents;
   int numQuarters;
   int numDimes;
   int numNickels;
   int numPennies;

   cout << "Enter total cents: " << endl;
   cin >> userCents;

   cout << "FIXME: Finish writing main()" << endl;

   ComputeChange(userCents, numQuarters, numDimes, numNickels);

   cout << "Quarters: " << numQuarters << endl;
   cout << "Dimes: " << numDimes << endl;
   cout << "Nickels: " << numNickels << endl;

   return 0;
}
