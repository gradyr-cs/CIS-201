/* 
    File: main.cpp 
    Description: 2.13.1: LAB: Parsing food data
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis202
    Section#: 30402
    Date: 02-24-2024
*/

#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main() {
    ifstream hungerFS; // filestream prereqs and tools
    string filename;
    string reader;
    string cat; // food category
    string name; // food name
    string desc; // food description
    string avail; // food availability
    int startPos = 0; // starting index position for substr(), variable makes for better readability
    int tabLoc; // stores the '\t's position
    // Below: positional variables on the index to sort the location of tabs in the .txt file
    int namePos; // the '\t' affiliated with the name  'food name' string
    int descPos; // ...with desc 'food description' string
    int availPos; // ...with avail 'is this food available' string.
    
    cin >> filename; // gather user input
    hungerFS.open(filename); // open the provided text file
    if (! hungerFS.is_open()) { // file validity check or forced exit
        return 1;
    }
    while (getline(hungerFS, reader)) { // while you can read lines in the file
        tabLoc = reader.find('\t'); // establish the first tab's location
        cat = reader.substr(0, tabLoc); // fill the variable

        // Move startPos to the position after the first tab
        startPos = tabLoc + 1;

        // Find the positions of the tabs using positions as variables
        namePos = reader.find('\t', startPos); 
        descPos = reader.find('\t', namePos + 1);
        availPos = reader.find('\t', descPos + 1);

        // Debug tool: Values will shift based on the initial position
        //cout << "Debug: namePos is: " << namePos << endl;
        //cout << "Debug: descPos is: " << descPos << endl;
        //cout << "Debug: availPos is: " << availPos << endl;

        // Extract substrings
        name = reader.substr(startPos, namePos - startPos);
        desc = reader.substr(namePos + 1, descPos - namePos - 1);
        avail = reader.substr(descPos + 1, availPos - descPos - 1);

        // Is this food item available?
        if (avail.find("Available") != string::npos) { // if Available is detected, cout the whitespace requirement
            cout << name << " (" << cat << ") -- " << desc << endl;
        }
    }

    hungerFS.close(); // close the file handler
    return 0;
}