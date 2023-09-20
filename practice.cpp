#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main() {

/* double a = 3; // make this a double for accuracy...
double b = 0;

// cout << a % b << endl; modulo division - shows the remainder
cout << a / b << endl;

*/

// volume of sphere = (4.0 / 3.0) pi symbol  r^3
    double r;
    cin >> r;
    double volume = (4 / 3.0) * M_PI * (r * r * r);
    cout << fixed << setprecision(4) << volume << endl;
    return 0;

}