#include <iostream>
using namespace std;

bool CurveGrade(int& studentScore, char& studentGrade) {
   bool isChanged;
   if ((studentScore >= 55) && (studentScore < 70) && (studentGrade != 'D')) {
      studentGrade = 'D';
      isChanged = true;
   }
   else {
      isChanged = false;
   }
   return isChanged;
}

int main() {
   int studentScore;
	char studentGrade;
   bool isChanged;

   cin >> studentScore;
   cin >> studentGrade;

   isChanged = CurveGrade(studentScore, studentGrade);

   if (isChanged) {
      cout << "Grade is " << studentGrade << " after curving." << endl;
   }
   else {
      cout << "Grade " << studentGrade << " is not changed." << endl;
   }

   return 0;
}