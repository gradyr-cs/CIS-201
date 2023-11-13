/* 
    File: main.cpp 
    Description: 5.18.1: LAB: Adjust list by normalizing
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis201
    Section#: 70107
    Date: 11-03-2023
*/

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
   int i;
   int sizeDet;
   double inProc;
   double maxVal;

   maxVal = 0.0; // initialize to prevent floating point precision errors

   cin >> sizeDet; // determine vector valHolder size.
   
   vector<double> valHolder(sizeDet);

   for (i = 0; i < valHolder.size(); ++i) { // gather the input data
      cin >> inProc; // obtain values for vector storage
      valHolder.at(i) = inProc;
   }
   
   maxVal = valHolder.at(0);
   for (i = 0; i < valHolder.size(); ++i) { // data processing tool #1 - grab largest value
      if (valHolder.at(i) > maxVal) {
         maxVal = valHolder.at(i);
      }
   }

   //cout << "Debug: maxVal = " << maxVal << endl; // largest value check verification

   for (i = 0; i < valHolder.size(); ++i) { // data processing tool #2 - divide current value by maxVal
      valHolder.at(i) = valHolder.at(i) / maxVal;
   }

   for (i = 0; i < valHolder.size(); ++i) { // data output tool
      cout << fixed << setprecision(2) << valHolder.at(i) << " ";

   }
   
   cout << endl;

   return 0;
}