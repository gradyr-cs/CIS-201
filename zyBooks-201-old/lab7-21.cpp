/* 
    File: main.cpp 
    Description: 7.21.1: LAB: Triangle area comparison (classes)
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis201
    Section#: 70107
    Date: 12-03-2023
*/

#include <iostream>
#include "Triangle.h"
using namespace std;

int main() {
   Triangle triangle1;
   Triangle triangle2;

   // TODO: Read and set base and height for triangle1 (use SetBase() and SetHeight())
   double t1b; // establish input var's
   double t1h;
   cin >> t1b >> t1h; // one line two inputs
   triangle1.SetBase(t1b); // assign input results to first instance of triangle
   triangle1.SetHeight(t1h);
      
   // TODO: Read and set base and height for triangle2 (use SetBase() and SetHeight())
   
   double t2b; // different vars for debug purposes.
   double t2h;
   cin >> t2b >> t2h;
   triangle2.SetBase(t2b);
   triangle2.SetHeight(t2h);
       
   cout << "Triangle with smaller area:" << endl;
   
   // TODO: Determine smaller triangle (use GetArea())  
   //       and output smaller triangle's info (use PrintInfo())
   if (triangle1.GetArea() < triangle2.GetArea()) {
      triangle1.PrintInfo();
   }
   else {
      triangle2.PrintInfo();
   }
   
   return 0;
}

--------------------

Triangle.cpp

#include "Triangle.h"
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void Triangle::SetBase(double userBase) {
   base = userBase;
}

void Triangle::SetHeight(double userHeight) {
   height = userHeight;
}

double Triangle::GetArea() const {
   return 0.5 * base * height;
}

void Triangle::PrintInfo() const {
   cout << fixed << setprecision(2);
   cout << "Base: " << base << endl;
   cout << "Height: " << height << endl;
   cout << "Area: " << GetArea() << endl;
}

----------------------

Triangle.h

#ifndef TRIANGLEH
#define TRIANGLEH

class Triangle {
   private:
      double base;
      double height;
   
   public:
      void SetBase(double userBase);
      void SetHeight(double userHeight);
      double GetArea() const;
      void PrintInfo() const;
};

#endif