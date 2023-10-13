#include <iostream>
using namespace std;

int main () {

   double nextNumber = 0.0;
   double sum = 0.0;
   int count = 0;
   double average = 0.0;

   cin >> nextNumber;
   
   while (nextNumber != -1.0) {
    if (nextNumber > 0.0) {
        count++;
        sum += nextNumber;
      }
      sum += nextNumber;
      
      
      
      count += 1;
      cin >> nextNumber;
      
   }

   if (count != 0) {
   average = sum / count;
   cout << average << endl;
   }

return 0;

}