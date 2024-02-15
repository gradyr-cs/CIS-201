/*
Define a function ComputeVal() that has one double parameter and returns the parameter plus 8.4 if the parameter is greater than 10.0. 
Otherwise, ComputeVal() returns 8.4 times the parameter.
*/


#include <iomanip>
#include <iostream>
using namespace std;

double ComputeVal(double inVal) {
   double result;
   
   if (inVal > 10.0) {
      result = inVal + 8.4;
   }
   else {
      result = inVal * 8.4;
   }
   
   return result;
}

int main() {
   double in;
   double result;
   
   cin >> in;
   
   result = ComputeVal(in);
   
   cout << fixed << setprecision(2) << result << endl;
   
   return 0;
}