/* 
    File: main.cpp 
    Description: 3.23.1: LAB: Interstate highway numbers
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis201
    Section#: 70107
    Date: 10-06-2023
*/

#include <iostream>
using namespace std;

int main() {
   int highwayNumber;
   string highwayDirection;
      
   cin >> highwayNumber;
   
   /* Note to self: This does not work for integers... you need to use modulo to access the digits in the int.
   if ((highwayNumber.size() == 3) && (highwayNumber.at(1) == 0)) && (highwayNumber.at(2) == 0))) {
      cout << "DEBUG: Test case successful" << endl;
   }
   */
   
   if ((highwayNumber > 0) && (highwayNumber <= 99)) {
      if (highwayNumber % 2 == 0) { // uses modulo to evaluate for even or odd, then assign accordingly
         highwayDirection = "east/west.";
         cout << "I-" << highwayNumber << " is primary, going " << highwayDirection << endl;
      }
      else {
         highwayDirection = "north/south.";
         cout << "I-" << highwayNumber << " is primary, going " << highwayDirection << endl;
      }
      
   }
   else if ((highwayNumber >= 100) && (highwayNumber <= 999) && ((highwayNumber % 100) != 0)) { //added modulus logic check to rule out if final two digits = 0 - they will display as a single 0 and not two with this method.
      if (highwayNumber % 2 == 0) {
         highwayDirection = "east/west.";
         cout << "I-" << highwayNumber << " is auxiliary, serving I-" << (highwayNumber % 100) << ", going " << highwayDirection << endl;
      }
      else {
         highwayDirection = "north/south.";
         cout << "I-" << highwayNumber << " is auxiliary, serving I-" << (highwayNumber % 100) << ", going " << highwayDirection << endl;
      }
      
   }
   else {
      cout << highwayNumber << " is not a valid interstate highway number." << endl; // default out if user input doesn't meet logic
   }
   
   
   return 0;
}
