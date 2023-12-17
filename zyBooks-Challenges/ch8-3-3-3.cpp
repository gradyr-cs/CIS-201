#include <iostream>
using namespace std;

class Coordinates {
   public:
      Coordinates(int xValue, int yValue);
      void IncreaseX();
      void Print();
   private:
      int x;
      int y;
};
Coordinates::Coordinates(int xValue, int yValue) {
   x = xValue;
   y = yValue;
}
void Coordinates::IncreaseX() {
	x = x * 8;
   cout << "Coordinates's x is increased." << endl;
}
void Coordinates::Print() {
   cout << "Coordinates's x: " << x << endl;
   cout << "Coordinates's y: " << y <<  endl;
}


int main() {
   
   int x;
   int y;
   
   cin >> x >> y;
   
   Coordinates* myCoordinates = new Coordinates(x, y);
   
   //myCoordinates->xValue = x;
   //myCoordinates->yValue = y;
   myCoordinates->IncreaseX();

   myCoordinates->Print();
   
   return 0;
}