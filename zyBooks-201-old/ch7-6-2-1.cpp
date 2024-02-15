#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Member {
   public:
      void SetHeight(double memberHeight);
		void SetName(string memberName);
		void SetAge(int memberAge);
      void Print();

   private:

      double height = -1.00;
      string name = "Unknown";
      int age = 1;

};

void Member::SetHeight(double memberHeight) {
	height = memberHeight;
}

void Member::SetName(string memberName) {
	name = memberName;
}

void Member::SetAge(int memberAge) {
	age = memberAge;
}

void Member::Print() {
   cout << "Height: " << fixed << setprecision(2) << height << ", Name: " << name << ", Age: " << age << endl;
}

int main() {
   double newHeight;
	string newName;
	int newAge;
   Member myMember;

   myMember.Print();

   cin >> newHeight;
	cin >> newName;
	cin >> newAge;

   myMember.SetHeight(newHeight);
	myMember.SetName(newName);
	myMember.SetAge(newAge);

   myMember.Print();

   return 0;
}