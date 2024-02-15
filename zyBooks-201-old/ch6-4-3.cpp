#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double ComputeBaseArea(double a) {
   double area;
   area = M_PI * pow(a, 2);
   return area;
}

double ComputeVolume(double b, double c) {
   double volume;
   double temp;
   temp = ComputeBaseArea(b);
   volume = temp * c;
   return volume;
}

int main() {
   double radius;
	double height;
   
   cin >> radius;
	cin >> height;

   cout << fixed << setprecision(1);

   cout << "Radius: " << radius << endl;
	cout << "Height: " << height << endl;

   cout << "Base area: ";
   cout << ComputeBaseArea(radius) << endl;

   cout << "Volume: ";
   cout << ComputeVolume(radius, height) << endl;
   
   return 0;
}