#include <iostream>
using namespace std;

double YardsToMeters(int yards) {
   double result;
   const double METER_LEN = 0.9144;
   result = yards * METER_LEN;
   
   return result;
   
}

int main() {
   int userYards;
   
   cin >> userYards;

   cout << "The number of meters is ";
	cout << YardsToMeters(userYards) << endl;
   
   return 0;
}