/* 
    File: main.cpp 
    Description: 11.1.1: LAB: Convert to binary - functions
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis202
    Section#: 30402
    Date: 04-04-2024
*/

/*
// This function has problems with odd numbers. My original project didn't have test case for this.
// See the evolution of my project at https://github.com/gradyr-cs/CIS-201/blob/main/zyBooks-201-old/4-14-lab-reverse.cpp
string IntToReverseBinary(int integerValue) {
    int y;
    string preBinary = "";
    string strInjector = "";
    while (integerValue > 0) {
        y = integerValue % 2;
        integerValue = integerValue / 2;
        strInjector = (to_string(y));
        preBinary = preBinary.insert(y, strInjector);
    }
    return preBinary;
}
*/

#include <iostream>
#include <string>
using namespace std;

string IntToReverseBinary(int integerValue) {
    string binConv = "";
    while (integerValue > 0) {
        binConv += char('0' + integerValue % 2); // corrected out of range error by casting the result to a char
        integerValue = integerValue / 2;
    }
    return binConv;
}

string StringReverse(string userString) {
    string reversedString;
    int z = userString.length();
    for (int i = z - 1; i >= 0; --i) {
        reversedString += userString[i];
    }
    return reversedString;
}

int main() {

    int userInput;
    cin >> userInput;

    string result = IntToReverseBinary(userInput);
    cout << StringReverse(result);
    cout << endl;

    return 0;
}
