// use a temporary variable to swap data between values without loss.

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    
int temp;
int a = 2;
int b = 4;

cout << "Original: " << a << " " << b << endl;

temp = a;
a = b;
//temp = b;
b = temp;

cout << "Swapped?: " << a << " " << b << endl;




return 0;
}