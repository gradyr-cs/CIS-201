#include <iostream>
#include <string>
using namespace std;

int main() {
char letter1;
char letter2;
int numCount = 0;

letter1 = 'a';
while (letter1 <= 'f') {
   letter2 = 'c';
   while (letter2 <= 'f') {
      numCount++;
      ++letter2;
   }
   ++letter1;
}
   cout << "Inner executed: " << numCount << " times." << endl;
   
   return 0;
}