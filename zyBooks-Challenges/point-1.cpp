#include<iostream>
#include<cmath>

using std::cout;
using std::cin;
using std::endl;

class Point {
    private:
        double m_x;
        double m_y;

    public:
       Point(double x,double y);
       void print();
       double distance(const Point &p);
};

Point::Point(double x,double y) {
    m_x = x;
    m_y = y; 
    cout << "constructor for Point" << endl;
}

void Point::print() {
    cout << "(" << m_x << "," <<  m_y << ")";
}

double Point::distance(const Point &p) {
   double d = sqrt(pow(m_x - p.m_x,2) + pow(m_y - p.m_y,2));
   return d;
}


int main() {
    Point p1(1.0,1.0);
    Point p2(2.0,2.0);
    p1.print();
    cout << endl;
    p2.print();
    cout << endl;
    cout << p1.distance(p2) << endl;

    return 0;
}