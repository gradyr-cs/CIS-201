/* 
    File: main.cpp 
    Description: 1.21 LAB: Remove all non-alphabetic characters - functions
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis202
    Section#: 30402
    Date: 02-16-2024
*/

#include <iostream>
#include <cctype>
using namespace std;

// This function iterates through the provided string, scans for non-alpha numerics and removes them
string RemoveNonAlpha(string userString) {
    string moddedString; // new string stored here after processing
    
    for (unsigned int i = 0; i < userString.length(); ++i) { // iterate through the function input
        
        if (isalpha(userString.at(i))) { // isalpha() enabled via <cctype>
            moddedString = moddedString + userString.at(i); // if isalpha, concatenate to moddedString for function's return.
        }
    }
    return moddedString; // return the new data to the result variable in the main function
}

int main() {
    string userString;
    string result;
   
    getline(cin, userString); // gather the input to send to function
    result = RemoveNonAlpha(userString); // assign function call's result into string result

    cout << result << endl;

    return 0;
}