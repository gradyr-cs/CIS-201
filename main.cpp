#include <iostream>
using namespace std;

int main() {
   int userAgeYears;
   int userAgeDays;
   int userAgeMinutes;
   
   cout << "Enter your age in years: ";
   cin  >> userAgeYears;
   
   userAgeDays = userAgeYears * 365;               // Calculate days without leap years
   userAgeDays = userAgeDays + (userAgeYears / 4); // Add days for leap years

   // userAgeDays += (3 * userAgeYears); // instead of userAgeDays = userAgeDays + userAgeDays (3 * userAgeYears)


   cout << "You are " << userAgeDays << " days old." << endl;
   
   userAgeMinutes = userAgeDays * 24 * 60;         // 24 hours/day, 60 minutes/hour
   cout << "You are " << userAgeMinutes << " minutes old." << endl;

   return 0;
}