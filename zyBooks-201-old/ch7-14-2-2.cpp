#include <iostream>
using namespace std;

class Point2D {
   public:
      Point2D(int xCoord = 0, int yCoord = 0);
      void Print() const;
      Point2D operator-(Point2D rhs);
   private:
      int xCoordinate;
      int yCoordinate;
};

Point2D::Point2D(int xCoord, int yCoord) {
   xCoordinate = xCoord;
   yCoordinate = yCoord;
}

// No need to accommodate for overflow or negative values

Point2D Point2D::operator-(Point2D rhs) {
   int currX;
   int currY;
   
   currX = xCoordinate - rhs.xCoordinate;
   currY = yCoordinate - rhs.yCoordinate;
   
   return Point2D(currX, currY);
}

void Point2D::Print() const {
   cout << xCoordinate << ", " << yCoordinate;
}

int main() {
   int xCoord1;
	int yCoord1;
	int xCoord2;
	int yCoord2;
   
   cin >> xCoord1;
	cin >> yCoord1;
	cin >> xCoord2;
	cin >> yCoord2;
   
   Point2D point1(xCoord1, yCoord1);
	Point2D point2(xCoord2, yCoord2);
   
   Point2D difference = point1 - point2;
   
   cout << "(";
	point1.Print();
	cout << ") - (";
	point2.Print();
	cout << ") = (";
	difference.Print();
	cout << ")" << endl;
   
   return 0;
}