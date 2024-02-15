#include <iostream>
#include <vector>
using namespace std;

int main() {
   int numTime;
   int firstTime;
   int lastTime;
   unsigned int i;

   cin >> numTime;
   cin >> firstTime;
   cin >> lastTime;

   vector<int> runningNumbers(numTime);
   
   runningNumbers.at(0) = firstTime;
   runningNumbers.at(runningNumbers.size() -1) = lastTime;

   for (i = 0; i < runningNumbers.size(); ++i) {
      cout << runningNumbers.at(i) << " ";
   }
   cout << endl;

   return 0;
}