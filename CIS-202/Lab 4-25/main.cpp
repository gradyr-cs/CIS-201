#include <iostream>
#include <iomanip>
#include <string>
#include "Course.h"
using namespace std;

int main() {
	Course cis162;
   int beginCount;
   string toDrop;
   
   // Example students for testing
   cis162.AddStudent(Student("Henry", "Nguyen", 3.5));   
   cis162.AddStudent(Student("Brenda", "Stern", 2.0)); 
   cis162.AddStudent(Student("Lynda", "Robison", 3.2)); 
   cis162.AddStudent(Student("Sonya", "King", 3.9)); 
   toDrop = "Stern";
   
   beginCount = cis162.CountStudents();
   cis162.DropStudent(toDrop);
		
	cout << "Course size: " << beginCount << " students" << endl;
	cout << "Course size after drop: " << cis162.CountStudents() << " students" << endl;

   return 0;
}