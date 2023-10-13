#include <iostream>
using namespace std;

int main() {
   int hourlyWage;
   int workHoursPerWeek;
   int annualSalary;
   int workWeeksPerYear;
   int monthlySalary;

   // TODO: Declare and initialize variable workWeeksPerYear, then replace the 50's below

   hourlyWage = 20;
   workHoursPerWeek = 35;
   workWeeksPerYear = 52;
   monthlySalary = (hourlyWage * workHoursPerWeek * workWeeksPerYear) / 12;

   annualSalary = hourlyWage * workHoursPerWeek * workWeeksPerYear;
   cout << "Annual salary is: ";
   cout << annualSalary << endl;

   cout << "Monthly salary is: ";
   //cout << (hourlyWage * workHoursPerWeek * workWeeksPerYear) / 12 << endl;
   cout << monthlySalary << endl;
   return 0;
}