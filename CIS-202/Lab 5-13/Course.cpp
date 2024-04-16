/* 
    File: Course.cpp
    Description: 5.13.1: LAB: Course information (derived classes)
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis202
    Section#: 30402
    Date: 04-05-2024
*/

#include "Course.h"

	// TODO: Define mutator functions - 
	//       SetCourseNumber(), SetCourseTitle()
	void Course::SetCourseNumber(string number) {
		courseNumber = number;
	}
	void Course::SetCourseTitle(string title) {
		courseTitle = title;
	}


	// TODO: Define accessor functions - 
	//       GetCourseNumber(), GetCourseTitle()
	string Course::GetCourseNumber() {
		return courseNumber;
	}
	string Course::GetCourseTitle() {
		return courseTitle;
	}


	// TODO: Define PrintInfo()
	void Course::PrintInfo() {
		cout << "Course Information:" << endl;
		cout << "   Course Number: " << courseNumber << endl;
		cout << "   Course Title: " << courseTitle << endl;
	}