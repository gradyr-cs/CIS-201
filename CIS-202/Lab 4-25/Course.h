#ifndef COURSE_H
#define COURSE_H

#include <vector>
#include "Student.h"

class Course {
   public: 
      void DropStudent(string last);
      void AddStudent(Student s);
      int CountStudents();
   
   private:
      vector<Student> roster; //collection of Student objects
};

#endif