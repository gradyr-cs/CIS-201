/*
Define a function PrintColors() that has three string parameters and outputs as follows. End with a newline. PrintColors() should not return any value.

Ex: If the input is gray blue brown, then the output is:

Top 3 colors:
1: gray
2: blue
3: brown
*/

#include <iostream>
using namespace std;

void PrintColors(string c1, string c2, string c3) {
   
   cout << "Top 3 colors:" << endl;
   cout << "1: " << c1 << endl;
   cout << "2: " << c2 << endl;
   cout << "3: " << c3 << endl;
   
}

int main() {
   string color1;
   string color2;
   string color3;

   cin >> color1;
   cin >> color2;
   cin >> color3;

   PrintColors(color1, color2, color3);

   return 0;
}