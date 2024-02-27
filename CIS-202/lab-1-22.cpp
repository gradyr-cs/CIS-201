/* 
    File: main.cpp 
    Description: 1.22.1: LAB: Toll calculations
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis202
    Section#: 30402
    Date: 02-16-2024
*/

#include <iostream>
#include <iomanip>
using namespace std;

// --- Function to calculate toll ---
// Key takeaways: isMorning signifies a.m. vs p.m, and isWeekend toggles rates betweenthe two toll prices
// isMorning will differentiate between rates despite the standard clock hour (non -military time used in provided test harness)
// isMorning is also represented by an INT, so the minutes must be handled via 'relational operators'
// the two sides of isMorning must be separated by < 12 for true, and >= 12 for false to accomodate for the a.m./p.m. time shift.
double CalcToll(int hour, bool isMorning, bool isWeekend) {
	
    if ((isMorning) && (!isWeekend)) { // if it IS morning and IS a weekday...
        if (hour < 7) { // before 7 a.m.
            return 6.15;
        }
        else if ((hour >= 7) && (hour < 10)) { // from 7 a.m. until 9:59 a.m.
            return 7.95;
        }
        else if ((hour >= 10) && (hour < 12)) { // from 10 a.m. until 11:59 a.m.
            return 6.90;
        }
        
    }

    if ((!isMorning) && (!isWeekend)) { // if it is NOT morning and IS a weekday...
        if ((hour >= 1) && (hour < 3)) { // from 1 p.m. until 2:59 p.m.
            return 6.90;
        }
        else if ((hour >= 3) && (hour < 8)) { // from 3 p.m. until 7:59 p.m.
            return 8.95;
        }
        else if ((hour >= 8) && (hour < 12)){ // from 8 p.m. until 11:59 p.m.
            return 6.40;
        }
        else { // handle the 12 p.m. hour as gap-filler. (Integers do not think like a clock)
            return 6.90;
        }
        
    }

    if ((isMorning) && (isWeekend)) { // if it IS morning and a weekend...
        if (hour < 7) { // before 7 a.m.
            return 6.05;
        }
        else if ((hour >= 7) && (hour < 12)) { // from 7 a.m. until 11:59 a.m.
            return 7.15;
        }
    }

    if ((!isMorning) && (isWeekend)) { // if it is NOT morning and a weekend...
        if ((hour >= 1) && (hour < 8)) { 
            return 7.15;
        }
        else if ((hour >= 8) && (hour < 12)) { // from 8 p.m. until 11:59 p.m.
            return 6.10;
        }
        else { // handle the 12 p.m. hour as gap-filler
            return 7.15;
        }
    }

    

    return 0.00; // return default for compliance of the function's structure
}

int main() {
    // the following four lines opperate as a test harness and are provided by the zyDE.
	cout << CalcToll(8, true, false) << endl;   // 7.95
	cout << CalcToll(1, false, false) << endl;  // 6.9
	cout << CalcToll(3, false, true) << endl;   // 7.15
	cout << CalcToll(5, true, true) << endl;    // 6.05

	return 0;
}