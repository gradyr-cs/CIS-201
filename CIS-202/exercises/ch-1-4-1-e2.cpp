/*
Define a function ConvertLength() that takes two integer parameters as the number of miles and yards. The function returns a double as the length converted to kilometers, given that:

1 yard = 0.0009144 kilometers
1 mile = 1760 yards
Ex: If the input is 1 132, then the output is:

Kilometers: 1.73004
*/

#include <iostream>
using namespace std;

double ConvertLength(int numMiles, int numYards) {
   double result;
   double milesToYards;
   milesToYards = numMiles * 1760;
   
   result = (milesToYards + numYards) * 0.0009144; 
   return result;
}

int main() {
   int numMiles;
   int numYards;
   
   cin >> numMiles;
   cin >> numYards;
   
   cout << "Kilometers: ";
	cout << ConvertLength(numMiles, numYards) << endl;
   
   return 0;
}