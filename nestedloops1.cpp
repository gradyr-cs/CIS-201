#include <iostream>
using namespace std;

int main() {
   int firstRange;
   int secondRange;
   int count;
   int i;
   int j;

   cin >> firstRange;
   cin >> secondRange;

   count = 0;
   i = 0;
   while (i <= firstRange) {
		j = 0;
		while ((j + 1) <= secondRange) {
         ++count;
         ++j;
      }
      ++i;
   }

   cout << "Inner loop ran " << count << " times" << endl;

   return 0;
}