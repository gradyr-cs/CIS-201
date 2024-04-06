/* 
    File: RandomNumbers.cpp
    Description: 4.24.1: LAB: Random values
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis202
    Section#: 30402
    Date: 03-24-2024
*/

#include <iostream>

#include "RandomNumbers.h"
using namespace std;
// establish the inner workings of the .h menu to add functionality
// This setter inserts the random value into the private variables
void RandomNumbers::SetRandomValues(int low, int high) {
    var1 = low + rand() % (high - low + 1);
    var2 = low + rand() % (high - low + 1);
    var3 = low + rand() % (high - low + 1);
}
// output the random values stored in the variables to the console
// adjustments for whitespace compliance.
void RandomNumbers::GetRandomValues() {
    cout << "Random values: " << var1 << " " << var2 << " " << var3 << endl;
}
// The getters...
int RandomNumbers::GetVar1() {
    return var1;
}

int RandomNumbers::GetVar2() {
    return var2;
}

int RandomNumbers::GetVar3() {
    return var3;
}