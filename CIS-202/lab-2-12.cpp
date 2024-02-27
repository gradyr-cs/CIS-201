/* 
    File: main.cpp 
    Description: 2.12.1: LAB: Course Grade
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
#include <vector>
using namespace std;


// This function take the 3 scores for each student and averages them to find a letter grade
// The result is then returned to be written to the output file.
string CalcGrade (int score1, int score2, int score3) {
    int result;
    result = ((score1 + score2 + score3) / 3);
    if (result >= 90) {
        return "A";
    }
    else if ((result >= 80) && (result < 90)) {
        return "B";
    }
    else if ((result >= 70) && (result < 80)) {
        return "C";
    }
    else if ((result >= 60) && (result < 70)) {
        return "D";
    }
    else {
        return "F";
    }
}

int main() {
    ifstream dataFS;
    ofstream dataOutFS;
    string filename;
    string lineBuffer;
    string lastName;
    string firstName;
    int score1;
    int score2;
    int score3;
    double avgScore1 = 0;
    double avgScore2 = 0;
    double avgScore3 = 0;
    int scoreCount = 0;

    cin >> filename;

    dataFS.open(filename);
    
    // this logic ensures the file is open or exits the program
    if (!dataFS.is_open()) {
        // cout << "Debug: File not found." << endl;
        return 1;
    }
    
    dataOutFS.open("report.txt"); // Open the file to output the processed data.

    //getline(dataFS, lineBuffer);
    // This loop uses the current open like to fill variables, then passes the to the the outstream and score processor
    //-----Note Self----- Don't do this. it can create duplicate lines..
    // while (!dataFS.eof()) {
    while (getline(dataFS, lineBuffer)) { // sentinel is set to the ability to get a line
        stringstream bufferStream(lineBuffer); // transfer the read line into the stringstream 
        
        bufferStream >> lastName >> firstName >> score1 >> score2 >> score3; // extract variables from the stream
        
        dataOutFS << lastName << "\t" << firstName << "\t" << score1 << "\t" << score2 << "\t" << score3 << "\t" << CalcGrade(score1, score2, score3) << endl;
        // adjust the averages inline via increments
        avgScore1 += score1;
        avgScore2 += score2;
        avgScore3 += score3;
        scoreCount++;

        //Debug Tool: Output to Console.
        //cout << lastName << "\t" << firstName << "\t" << score1 << "\t" << score2 << "\t" << score3 << "\t" << CalcGrade(score1, score2, score3) << endl;
        
    }
    // compute the averages per whitespace requirements
    dataOutFS << endl;
    dataOutFS << fixed << setprecision(2) << "Averages: midterm1 " << avgScore1 / scoreCount << ", midterm2 " << avgScore2 / scoreCount << ", final " << avgScore3 / scoreCount << endl;

    dataFS.close(); // close the input file
    dataOutFS.close(); // close the output file

    return 0;
}
