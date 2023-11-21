#include <iostream>
using namespace std;

int main() {
   const int NUM_ROWS = 2;
   const int NUM_COLS = 2;
   int milesTracker[NUM_ROWS][NUM_COLS];
   int i;
   int j;
   int maxMiles = 0; // Assign with first element in milesTracker before loop
   int minMiles = 0; // Assign with first element in milesTracker before loop
   int value;

   for (i = 0; i < NUM_ROWS; i++){ // you can nestle the two dimensions of the array in nested loops for analysis.
      for (j = 0; j < NUM_COLS; j++){
         cin >> value;
         milesTracker[i][j] = value;
      }
   }

   maxMiles = milesTracker[0][0]; // remember to initialize properly! Save yourself lots of time!
   for (i = 0; i < NUM_ROWS; ++i) { // don't forget the the scope of i and j... cannot use them before they are assigned.
      for (j = 0; j < NUM_COLS; ++j) {
         if (milesTracker[i][j] > maxMiles) { // assign max val into the temp holder via logic
            maxMiles = milesTracker[i][j];
         } 
      }
      
   }
   
   minMiles = milesTracker[0][0]; // corrected from [i][j]... these werent initialized and caused errors...
   for (i = 0; i < NUM_ROWS; ++i) {
      for (j = 0; j < NUM_COLS; ++j) {
         if (milesTracker[i][j] < minMiles) { // assigns lowest val into the temp holder to pass to the cout section.
            minMiles = milesTracker[i][j];
         } 
      }
   }

   cout << "Min miles: " << minMiles << endl;
   cout << "Max miles: " << maxMiles << endl;

   return 0;
}