/* 
    File: main.cpp 
    Description: 6.22.1: LAB: Sort a vector
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis201
    Section#: 70107
    Date: 11-17-2023
*/

#include <iostream>
#include <vector>
using namespace std;

// global variable for BubbleVision() counter function internal.
int bubbleHelper = 0;

// BubbleVision() is a debug tool to show sort progress through each loop
// Note: if this function were below SortVector(), you would need to to make a declaration as follows:
// void BubbleVision(vector<int>& sortVec); --otherwise the order of precedence does not matter in this 
// particular case.
void BubbleVision(vector<int>& sortVec) {
    for (int i = 0; i < sortVec.size(); ++i) {
        cout << sortVec[i] << " ";
    }
    bubbleHelper++;
    cout << " Bubble Sort pass result #" << bubbleHelper << endl;
}

// bubble sort vector influence from geeksforgeeks / youtube / and wikipedia - 
void SortVector(vector<int>& sortVec) { // establish the function, pass the vector
    int v = sortVec.size(); // establish the loop size
    bool swapTemp; // logic checker for swap status?

    for (int i = 0; i < v - 1; ++i) { //
        bool swapped = false;

        for (int j = 0; j < v - i - 1; ++j) {
            if (sortVec[j] > sortVec[j + 1]) {
                swap(sortVec[j], sortVec[j + 1]);
                swapTemp = true;
            }
        }
        if (!swapTemp) {
            break;
        }
        // disable this function call to prevent sort visualization in console
        BubbleVision(sortVec);
    }
}

int main() {
    int vecSize;
    int vecFiller;
    vector<int> sortVec;

    cin >> vecSize;

    sortVec.resize(vecSize);
    //  fill the vector
    for (int i = 0; i < vecSize; ++i) {
        cin >> vecFiller;
        sortVec.at(i) = vecFiller;
    }
    // call the function to bubble sort the vector
    SortVector(sortVec);
    
    // output the processed vector
    for (int i = 0; i < sortVec.size(); ++i) {
        //
        cout << sortVec.at(i) << ", ";
    }
    cout << endl;



    return 0;
}
