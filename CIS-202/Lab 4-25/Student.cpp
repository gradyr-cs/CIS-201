#include "Student.h"

// Student class constructor
Student::Student(string first, string last, double gpa) {
		this->first = first;    // first name
		this->last = last;      // last name
		this->gpa = gpa;        // grade point average
}

double Student::GetGPA() {
		return gpa;
}

string Student::GetLast() {
		return last;
}