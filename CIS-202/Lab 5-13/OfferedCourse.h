/* 
    File: OfferedCourse.h 
    Description: 5.13.1: LAB: Course information (derived classes)
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis202
    Section#: 30402
    Date: 04-05-2024
*/

#ifndef OFFERED_COURSEH
#define OFFERED_COURSEH

#include "Course.h"

class OfferedCourse : public Course {
	// TODO: Declare private data members
	private:
		string instructorName;
		string location;
		string classTime;


	// TODO: Declare mutator functions -
	//      SetInstructorName(), SetLocation(), SetClassTime()
	public:
		void SetInstructorName(string name);
		void SetLocation(string loc);
		void SetClassTime(string time);

	// TODO: Declare accessor functions -
	//      GetInstructorName(), GetLocation(), GetClassTime()
	string GetInstructorName();
	string GetLocation();
	string GetClassTime();
};

#endif