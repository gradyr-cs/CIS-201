/* 
    File: main.cpp 
    Description: 2.14.1: LAB: Thesaurus
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis202
    Section#: 30402
    Date: 02-25-2024
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    ifstream dictFS;
    vector<string> inVec;
    string filename;
    string reader;
    char inLetter;
    string analyzeFirst;
    string file; // holds the filename input pre-extension being appended
    string var;

    cin >> file;
    filename = file + ".txt"; // append ".txt" to the filename
    cin >> inLetter;

    // this handles the file opening and error handling
    dictFS.open(filename);
    if (!dictFS.is_open()) {
        cout << "Filename is invalid. Exiting with 1." << endl;
        return 1;
    }
    // this while loop gets lines from the file, analyzes if the first letter of that line 
    // matches the input, then extracts the synonyms via a stringstream and pushes them back 
    // into the vector
    while (getline(dictFS, reader)) {
        analyzeFirst = reader.substr(0, reader.find(" "));
        if (analyzeFirst.at(0) == inLetter) {
            stringstream bufferStream(reader);
            inVec.push_back(analyzeFirst); // prime the vector
            bufferStream >> var;
            while (bufferStream >> var) {
                inVec.push_back(var);
            }
        }
    }
    // if the vector has data, send it to the console, if not then send the error message
    if (!inVec.empty()) { 
        for (unsigned int i = 0; i < inVec.size(); ++i) { // added unsigned to fix W-sign-compare error
            cout << inVec.at(i) << endl;
        }
    }
    else { // if vector is empty - display error for whitespace compliance
        cout << "No synonyms for " << file << " begin with " << inLetter << "." << endl;
    }
    
    return 0;
}