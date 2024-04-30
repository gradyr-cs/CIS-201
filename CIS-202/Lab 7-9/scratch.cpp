/* 
    File: main.cpp
    Description: 7.9.1: LAB: Student info not found
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis202
    Section#: 30402
    Date: 04-25-2024
*/

#include <string>
#include <iostream>
#include <stdexcept>
#include <fstream>
using namespace std;

// Accessed via userChoice == 0
// This function is experimental using a boolean to trigger the exception message vs the else used in the next function.
string FindID(string name, ifstream &infoFS) {
    bool finder = false;
    string line;
    while (getline(infoFS, line)) {
        if (line.find(name) != string::npos) {
         return line.substr(line.find(" ") + 1);
         finder = true;
        }
    }
    if (finder == false) {
        throw runtime_error("Student ID not found for " + name);
    }
    return "";
}

// Accessed via userChoice == 1
// This is more of an if / break flow to the exception, it is just as effective as above, if not a bit cleaner.
string FindName(string ID, ifstream &infoFS) {
  
   string line;
   while (getline(infoFS, line)) {
      if (line.find(ID) != string::npos) {
         line = line.substr(0, line.find(" ")); // Extract ID by finding the first entry on the line.
         // Debug tool:
            //cout << "Found: " << line << endl;
            return line;
      }
      else {
         throw runtime_error("Student name not found for " + ID);
      }
   }
   return "";
  
}


int main() {
   int userChoice;
   string studentName;
   string studentID;
   
   string studentInfoFileName;
   ifstream studentInfoFS;
   
   // Read the text file name from user
   // Debug: Comment out these lines before the 3 inputs for whitespace compliance.
   //cout << "Enter the name of the file: ";
   cin >> studentInfoFileName;
   
   
   // Read search option from user. 0: FindID(), 1: FindName()
   //cout << "Enter 0 to access FindID() or 1 to access FindName()" << endl;
   cin >> userChoice;
    
   // Open the text file
   studentInfoFS.open(studentInfoFileName);
   if (!studentInfoFS.is_open()) {
      throw runtime_error("File not open.");
   }
   
   
   
   // This branch requests the 3rd input and uses the appropriate function to find the student name or ID.
   // Reconfigured the try/catch block to catch the exception and output the exception message.
   // After much tinkering, it is better to control the userChoice from within the try block.
   // This will prevent the catch from triggering inappropriately. in the remaining 3 test cases on zybooks.
    try {
       if (userChoice == 0) {
           cin >> studentName;
           studentID = FindID(studentName, studentInfoFS);
           cout << studentID << endl;
       }
       else {
           cin >> studentID;
           studentName = FindName(studentID, studentInfoFS);
           cout << studentName << endl;
       }
   } catch (const runtime_error& e) {
       cout << e.what() << endl; // Output the exception message
   }
   
   
   
   studentInfoFS.close();
   return 0;
}
