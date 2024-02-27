#include <iostream>
using namespace std;

double FindEmployeeTax(int salary, int userDependents) {
   if (salary < 400000) {
      if (userDependents < 3) {
         return 0.11;
      }
      else if ((userDependents >= 3) && (userDependents <= 6)) {
         return 0.1;
      }
      else {
         return 0;
      }
   }
   if ((salary >= 400000) && (salary <= 599999)) {
      if (userDependents < 3) {
         return 0.28;
      }
      else if ((userDependents >= 3) && (userDependents <= 6)) {
         return 0.11;
      }
      else {
         return 0.11;
      }
   }
   if (salary >= 600000) {
      if (userDependents < 3) {
         return 0.33;
      }
      else if ((userDependents >= 3) && (userDependents <= 6)) {
         return 0.28;
      }
      else {
         return 0.28;
      }
   }
   return 0;
}

int main() {
   int salary;
   int userDependents;

   cin >> salary;
   cin >> userDependents;
   
   cout << FindEmployeeTax(salary, userDependents) << endl;

   return 0;
}