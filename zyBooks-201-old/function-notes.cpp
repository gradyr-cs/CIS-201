/*

you can function overload, basically if the names are the same, they need different signature values or output types.

int cube(int x); // declares a function
then you can 'define' it inside of the main function.

more examples... ()

*/
#include <cmath>
#include <iostream>
#include <string>
using namespace std;

double distance(double x1, double y2, double x2, double y2) {
    return sqrt(pow(x2-x1,2) + pow(y2-y1, 2));
}

int main() {
    double x1, y1, x2, y2;

    cin >> x1 >> y1 >> x2 >> y2;
    double distance = sqrt(pow(x2-x1,2) + pow(y2-y1, 2)); // put math formulas into these 
    cout << distance;

    return 0;
}