#include <iostream>
#include "Course.h"
using namespace std;

void Course::DropStudent(string last) {
   /* Type your code here */
}

void Course::AddStudent(Student s) {
	roster.push_back(s);
}

int Course::CountStudents() {
   return roster.size();
}