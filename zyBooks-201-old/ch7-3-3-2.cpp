#include <iostream>
using namespace std;

class FishermanLicense {
   public:
      int GetId() const;
		int GetYear() const;
      int GetFee() const;
      void SetId(int newId);
      void SetYear(int newYear);
      void SetFee(int newFee);
   private:
      int id;
      int year;
      int fee;
};

void FishermanLicense::SetId(int newId) {
   id = newId;
}

void FishermanLicense::SetYear(int newYear) {
	year = newYear;
}

void FishermanLicense::SetFee(int newFee) {   
   fee = newFee;
}

int FishermanLicense::GetId() const {
   return id;
}

int FishermanLicense::GetYear() const {
	return year;
}

int FishermanLicense::GetFee() const {
   return fee;
}

int main() {
   FishermanLicense fisherman1;
   int inputId;
	int inputYear;
   int inputFee;

   cin >> inputId;
	cin >> inputYear;
   cin >> inputFee;

   fisherman1.SetId(inputId);
	fisherman1.SetYear(inputYear);
   fisherman1.SetFee(inputFee);
   
   cout << "License id: " << fisherman1.GetId() << endl;
	cout << "License year: " << fisherman1.GetYear() << endl;
   cout << "License fee: " << fisherman1.GetFee() << endl;

   return 0;
}