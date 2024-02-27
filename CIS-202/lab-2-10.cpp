/* 
    File: main.cpp 
    Description: 2.10.1: LAB: Parsing dates
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis202
    Section#: 30402
    Date: 02-24-2024
*/

#include <iostream>
#include <string>

using namespace std;

int GetMonthAsInt(string month) {
	int monthInt = 0;
	
	if (month == "January")
		monthInt = 1;
	else if (month == "February")
		monthInt = 2;
	else if (month == "March")
		monthInt = 3;
	else if (month == "April")
		monthInt = 4;
	else if (month == "May")
		monthInt = 5;
	else if (month == "June")
		monthInt = 6;
	else if (month == "July")
		monthInt = 7;
	else if (month == "August")
		monthInt = 8;
	else if (month == "September")
		monthInt = 9;
	else if (month == "October")
		monthInt = 10;
	else if (month == "November")
		monthInt = 11;
	else if (month == "December")
		monthInt = 12;
	return monthInt;
}

int main () {
	string userInput;
    int convertMonth;
	string month;
    string day;
    string year;
	
	getline(cin, userInput); // read the string input as a full-line and store to userInput

	// This lab challenge requires the use of substr().
	// usage stringname.substr(start position, length);

    while (userInput != "-1") { // sentinel value. Do this while userInput is NOT "-1"
		month = userInput.substr(0, userInput.find(" ")); // find the string content up to the first 'space' detected
		day = userInput.substr(userInput.find(" ") + 1, userInput.find(",") - userInput.find(" ") - 1); // This now allows for variable scan length for days > 1 digit
		year = userInput.substr(userInput.find(",") + 2); // find the comma, then start scan after the comma and bypass the next instance of 'space'
		
		convertMonth = GetMonthAsInt(month); // convert month to int with the provided function
		if (convertMonth != 0) { // // if the month is valid per the function, range 1 to 12
			if (userInput.find(',') != string::npos) { // Fix edge-case: Date input without comma after day... an ugly hack but it works.
				cout << convertMonth << "-" << day << "-" << year << endl; // output the data in the proper whitespace format
			}
		}
		else {
			// cout << "Debug: Not a valid extraction!" << endl; // debug tool - comment out for whitespace post-testing.
		}
		getline(cin, userInput); // read the string again to continue the loop process
        
    }

    return 0;
}