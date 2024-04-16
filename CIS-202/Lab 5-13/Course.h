/* 
    File: Course.h
    Description: 5.13.1: LAB: Course information (derived classes)
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis202
    Section#: 30402
    Date: 04-05-2024
*/

#ifndef COURSEH
#define COURSEH

#include <iostream>
#include <string>

using namespace std;

class Course {
	// TODO: Declare private data members
	string courseNumber;
	string courseTitle;
	
	// TODO: Declare mutator functions 
	//       SetCourseNumber(), SetCourseTitle()
public:
	void SetCourseNumber(string number);
	void SetCourseTitle(string title);


	// TODO: Declare accessor functions - 
	//       GetCourseNumber(), GetCourseTitle()
	string GetCourseNumber();
	string GetCourseTitle();

	// TODO: Declare PrintInfo()
	void PrintInfo();
};

#endif
