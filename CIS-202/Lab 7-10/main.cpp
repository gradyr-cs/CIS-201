/* 
    File: main.cpp
    Description: 7.10.1: LAB: Input errors with zyLabs
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis202
    Section#: 30402
    Date: 04-25-2024
*/

#include <iostream>
using namespace std;

int main() {
   cin.exceptions(ios::failbit); // Allow cin to throw exceptions
   int val1;
   int val2;
   int val3;
   int max = 0;
   int tally = 0;
   
   val1 = 0;
   val2 = 0;
   val3 = 0;
      
   
   // Inputs are not being counted correctly., trying individual increments per cin statement.
   // Try logic altered to accomodate zyBooks "mystery input system" because somehow it doesnt hang on the console 
   // when non-int values are provided despite that other IDE's continue to search for input...
   
   // Introducing the zyBooks strange IDE tool demystifier...
    try {
        cin >> val1;
        //cout << "Val1 is now: " << val1 << endl;
        if (val1 > 0) {
           tally++;  
           max = val1;
        }
        cin >> val2;
        //cout << "Val2 is now: " << val2 << endl;
        tally++;   
        if (val2 > max) {
           max = val2;
        }
        cin >> val3;
        //cout << "Val3 is now: " << val3 << endl;
        tally++; 
        if (val3 > max) {
            max = val3;
        }
        
        
        
        
       
        cout << max << endl;
        // Error cases to be caught.
    } 
    catch (ios_base::failure &excpt) {
        cout << tally << " input(s) read:" << endl;
        if (tally > 0) {
            cout << "Max is " << max << endl; // Output the maximum value read
        } else {
            cout << "No max" << endl; // No inputs were read
        }
    }
    

   return 0;
}
