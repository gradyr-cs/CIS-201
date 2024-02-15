/*
Define the following functions:

CalculateBaseArea() takes one double parameter as a cube's side length. The function returns the area of the cube's base as a double. The area of the base is calculated by: 
CalculateSurfaceArea() takes one double parameter as a cube's side length. The function returns the cube's surface area as a double, and uses the CalculateBaseArea() function to calculate the cube's base area. The surface area is calculated by: 
Ex: If the input is 3.0, then the output is:

Side length: 3.0
Base area: 9.0
Surface area: 54.0
*/

#include <iostream>
#include <iomanip>
using namespace std;

double CalculateBaseArea(double sideLength) {
   double result;
   //result = pow(sideLength, 2); // what am i doing wrong here?
   result = sideLength *sideLength;
   return result;
}
double CalculateSurfaceArea(double sideLength) {
   double result;
   result = CalculateBaseArea(sideLength) * 6;
   
   return result;
}

int main() {
   double userSideLength;
   
   cin >> userSideLength;

   cout << fixed << setprecision(1);

   cout << "Side length: " << userSideLength << endl;

   cout << "Base area: ";
   cout << CalculateBaseArea(userSideLength) << endl;

   cout << "Surface area: ";
   cout << CalculateSurfaceArea(userSideLength) << endl;
   
   return 0;
}