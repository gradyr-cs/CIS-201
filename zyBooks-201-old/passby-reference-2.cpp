#include <iostream>
using namespace std;

void GetTime(int& usrWeeks, int& usrDays) {
   cin >> usrWeeks >> usrDays;
}

int main() {
   int usrWeeks;
	int usrDays;

   GetTime(usrWeeks, usrDays);

   cout << usrWeeks << " weeks and " << usrDays << " days" << endl;
   
   return 0;
}