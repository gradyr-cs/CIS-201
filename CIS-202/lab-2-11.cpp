/* 
    File: main.cpp 
    Description: 2.11.1: LAB: File name change
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis202
    Section#: 30402
    Date: 02-24-2024
*/

#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int main() {
    ifstream photosFS; // establish the in-file stream
    string lineReader; // holds each line in file while loop iterates
    string modOutput; // stores the trimmed text input
    string filename; // store the file name to process and pass to instream

    cin >> filename; // gather filename from user via console input
    photosFS.open(filename); // open the file for analysis

    if (!photosFS.is_open()) { // error checker. Kills program if input is invalid
        return 1;
    }

    getline(photosFS, lineReader); // take the initial input from the opened file
    while (!photosFS.fail()) { // establish the sentinel
        modOutput = lineReader.substr(0, lineReader.find('_')); // clip out the needed file portion to the new variable
        cout << modOutput << "_info.txt" << endl; // output to console the new variable and append the expected text to comply with whitespace
        getline(photosFS, lineReader); // gather next input
    }

    photosFS.close(); // close the file handle to prevent access issues
   

   return 0;
}
