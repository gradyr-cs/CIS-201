/* 
    File: OfferedCourse.cpp
    Description: 5.13.1: LAB: Course information (derived classes)
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis202
    Section#: 30402
    Date: 04-05-2024
*/

#include "OfferedCourse.h"

// TODO: Define mutator functions -
//      SetInstructorName(), SetLocation(), SetClassTime()
void OfferedCourse::SetInstructorName(string name) {
    instructorName = name;
}
void OfferedCourse::SetLocation(string loc) {
    location = loc;
}
void OfferedCourse::SetClassTime(string time) {
    classTime = time;
}


// TODO: Define accessor functions -
//      GetInstructorName(), GetLocation(), GetClassTime()
string OfferedCourse::GetInstructorName() {
    return instructorName;
}
string OfferedCourse::GetLocation() {
    return location;
}
string OfferedCourse::GetClassTime() {
    return classTime;
}