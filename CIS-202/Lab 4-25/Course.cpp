/* 
    File: Course.cpp
    Description: 4.25.1: LAB: Drop student
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis202
    Section#: 30402
    Date: 03-24-2024
*/

#include <iostream>
#include "Course.h"
using namespace std;

// this completed function will check for a string match and then remove it from the roster
void Course::DropStudent(string last) {
   for (unsigned int i = 0; i < roster.size(); i++) {
      if (roster[i].GetLast() == last) {
         roster.erase(roster.begin() + i);
         break;
      }
   }
}

void Course::AddStudent(Student s) {
	roster.push_back(s);
}

int Course::CountStudents() {
   return roster.size();
}