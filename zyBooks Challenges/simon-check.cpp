#include <iostream>
#include <string>
using namespace std;

int main() {
   string simonPattern;
   string userPattern;
   int userScore;
   int i;

   userScore = 0;

   cin >> simonPattern;
   cin >> userPattern;

   for (i = 0; i < userPattern.size(); ++i) {
      if (userPattern[i] == simonPattern[i]) {
         userScore++;
      }
      else {
         break;
      }
   }

   cout << "userScore: " << userScore << endl;

   return 0;
}