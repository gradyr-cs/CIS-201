#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   int strength;
   double speed;
   char direction;
   
   int* strengthPointer = &strength;
   double* speedPointer = &speed;
   char* directionPointer = &direction;
   
   cin >> strength;
   cin >> speed;
   cin >> direction;

   cout << "Hurricane level: " << *strengthPointer << endl;
	cout << "Speed: " << fixed << setprecision(1) << *speedPointer << " miles per hour" << endl;
	cout << "Direction: " << *directionPointer << endl;

   return 0;
}