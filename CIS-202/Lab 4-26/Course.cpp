/* 
    File: Course.cpp
    Description: 4.26.1: LAB: Find student with highest GPA
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis202
    Section#: 30402
    Date: 03-24-2024
*/

#include <iostream>
#include "Course.h"
using namespace std;

// This function will iterate through the roster and assign the student with highest GPA to the variable
Student Course::FindStudentHighestGpa() {
   Student top_student = roster[0];
   for (int i = 1; i < roster.size(); i++) {
      if (roster[i].GetGPA() > top_student.GetGPA()) {
         top_student = roster[i];
      }
   }
   return top_student;
}

void Course::AddStudent(Student s) {
	roster.push_back(s);
}