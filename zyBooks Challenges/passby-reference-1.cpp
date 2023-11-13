#include <iostream>
using namespace std;

int main() {
   char letterValue;

   char& letterRef = letterValue;

   cin >> letterValue;
  
   cout << "Referenced letter is " << letterRef << "." << endl;

   return 0;
}