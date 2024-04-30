/*
A pedometer treats walking 2,000 steps as walking 1 mile. Write a StepsToMiles() function that takes the number of steps as an integer parameter and returns the miles walked as a double. The StepsToMiles() function throws a runtime_error object with the message "Exception: Negative step count entered." when the number of steps is negative. Complete the main() function that reads the number of steps from a user, calls the StepsToMiles() function, and outputs the returned value from the StepsToMiles() function. Use a try-catch block to catch any runtime_error object thrown by the StepsToMiles() function and output the exception message.

Output each floating-point value with two digits after the decimal point, which can be achieved by executing
cout << fixed << setprecision(2); once before all other cout statements.

Ex: If the input of the program is:

5345
the output of the program is:

2.67
Ex: If the input of the program is:

-3850
the output of the program is:

Exception: Negative step count entered.
*/

/* 
    File: main.cpp
    Description: 7.8.1: LAB: Step counter - exceptions
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis202
    Section#: 30402
    Date: 04-25-2024
*/

#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;

// This function take the number of steps as an integer parameter and returns the miles walked as a double.
double StepsToMiles(int steps) {
    double convMiles; 
    if (steps < 0) {
    throw runtime_error("Exception: Negative step count entered.");
    }
    // If the error check passes, convert the steps to miles and return the value.
    convMiles = steps / 2000.0;
    return convMiles;
}



int main() {

   /* Type your code here. */
    int steps;
    double miles;
    cin >> steps;
    // Try the user input with the StepsToMiles function.
    try {
        StepsToMiles(steps); // If the function throws an error, it will be caught here and break out of the try block.
        miles = StepsToMiles(steps); // Is our value good? Then let's assign it to mile and make the cout to console
        cout << fixed << setprecision(2) << miles << endl;
    } catch (runtime_error& excpt) { // This is the catcher.
        cout << excpt.what() << endl;
    }
    

   return 0;
}
