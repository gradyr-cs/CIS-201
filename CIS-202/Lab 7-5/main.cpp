/*
The given program reads a list of single-word first names and ages (ending with -1), and outputs that list with the age incremented. The program fails and throws an exception if the second input on a line is a string rather than an int. At FIXME in the code, add a try/catch statement to catch ios_base::failure, and output 0 for the age.

Ex: If the input is:

Lee 18
Lua 21
Mary Beth 19
Stu 33
-1
then the output is:

Lee 19
Lua 22
Mary 0
Stu 34
Note: Insert the following code in the catch block to clear the failbit and cin buffer so a new input can be read correctly:

// Clear failbit to be able to use cin again
cin.clear();
// Throw away the rest of the failed input line from cin buffer
string garbage;
getline(cin, garbage);
*/

/* 
    File: main.cpp
    Description: 7.5.1: LAB: Exception handling to detect input string vs. int
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis202
    Section#: 30402
    Date: 04-25-2024
*/

/* 
    File: main.cpp
    Description: 7.5.1: LAB: Exception handling to detect input string vs. int
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis202
    Section#: 30402
    Date: 04-25-2024
*/

#include <string>
#include <iostream>

using namespace std;

int main() {
   string inputName;
   int age;
   // Set exception mask for cin stream
   cin.exceptions(ios::failbit);

   cin >> inputName;
   while(inputName != "-1") {
      try {
         cin >> age;
      } 
      catch (ios_base::failure) {
         age = 0;
         cin.clear(); // Fail bit is cleared allowing for reactivation of cin
         // Debug tool below - disabled for whitespace compliance.
         //cout << inputName << " is being naughty! - Single names only..." << endl;
         string garbage;
         getline(cin, garbage);
      }
      if (age == 0) { // logic added to prevent age incrementation on invalid input
         cout << inputName << " " << age << endl;
      }
      else
      cout << inputName << " " << (age + 1) << endl;
      cin >> inputName;
   }
   return 0;
}