#include <iostream>
#include <stdexcept> // class for exceptions try / throw / catch
using namespace std;

int main() {
   int weightVal;       // User defined weight (lbs)
   int heightVal;       // User defined height (in)
   float bmiCalc;       // Resulting BMI
   char quitCmd;        // Indicates quit/continue

   quitCmd = 'a';
   
   while (quitCmd != 'q') {
      
      try {
         // Get user data
         cout << "Enter weight (in pounds): ";
         cin >> weightVal;
         
         // Error checking, non-negative weight
         if (weightVal < 0) {
            throw runtime_error("Invalid weight."); // runtime_error is an object
         }
         
         cout << "Enter height (in inches): ";
         cin >> heightVal;
         
         // Error checking, non-negative height
         if (heightVal < 0) {
            throw runtime_error("Invalid height.");
         }
         
         // Calculate BMI and print user health info if no input error
         // Source: http://www.cdc.gov/
         bmiCalc = (static_cast<float>(weightVal) /
                    static_cast<float>(heightVal * heightVal)) * 703.0;
         
         cout << "BMI: " << bmiCalc << endl;
         cout << "(CDC: 18.6-24.9 normal)" << endl;
      }
      catch (runtime_error& excpt) { // needs to be passed by reference.
         // Prints the error message passed by throw statement
         cout << excpt.what() << endl; // 'what' stores the error thrown
         cout << "Cannot compute health info." << endl;
      }
      
      // Prompt user to continue/quit
      cout << endl << "Enter any key ('q' to quit): ";
      cin >> quitCmd;
   }
   
   return 0;
}