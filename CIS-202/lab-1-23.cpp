/* 
    File: main.cpp 
    Description: 1.23.1: LAB: Count evens
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis202
    Section#: 30402
    Date: 02-16-2024
*/

#include <iostream>
#include <vector>
using namespace std;

// Function to analyze 5 integers input from console and return the number of even numbers from the five
int CountEvens(int num1, int num2, int num3, int num4, int num5) {
    int counter = 0;
    vector<int> numAnalyzer; // initialize a vector to store the input
    numAnalyzer.push_back(num1); // load each number into the vector
    numAnalyzer.push_back(num2);
    numAnalyzer.push_back(num3);
    numAnalyzer.push_back(num4);
    numAnalyzer.push_back(num5);

    for (unsigned int i = 0; i < numAnalyzer.size(); ++i) {
        if ((numAnalyzer.at(i) % 2) == 0) { // is vector index at i an even number?
        counter++; // increase the result by 1 to prep for return
        }
    }

    return counter;
}

int main() {
    int num1;
    int num2;
    int num3;
    int num4;
    int num5;
    int result;
   
    cin >> num1;
    cin >> num2;
    cin >> num3;
    cin >> num4;
    cin >> num5;
   
    result = CountEvens(num1, num2, num3, num4, num5); // feed the function for analysis
	cout << "Total evens: " << result << endl; // output to console the result

    return 0;
}
