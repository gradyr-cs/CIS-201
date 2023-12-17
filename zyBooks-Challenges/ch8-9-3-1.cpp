#include <iostream>
#include <iomanip>
using namespace std;

class SavingsAccount {
   public:
      SavingsAccount(double startingSaved = 0.0, double startingInterest = 0.0);
      SavingsAccount(const SavingsAccount& acc);
      void SetSaved(double newSaved);
      void SetInterest(double newInterest);
      double GetSaved() const;
      double GetInterest() const;
      void Print() const;
   private:
      double* saved;
      double* interest;
};

SavingsAccount::SavingsAccount(double startingSaved, double startingInterest) {
   saved = new double(startingSaved);
   interest = new double(startingInterest);
   cout << "Original constructor called" << endl;
}

SavingsAccount::SavingsAccount(const SavingsAccount& acc) {
   saved = new double;
   *saved = *(acc.saved);
   interest = new double;
   *interest = *(acc.interest);
   cout << "Made a deep copy of SavingsAccount" << endl;
}

void SavingsAccount::SetSaved(double newSaved) {
   *saved = newSaved;
}

void SavingsAccount::SetInterest(double newInterest) {
   *interest = newInterest;
}

double SavingsAccount::GetSaved() const {
   return *saved;
}

double SavingsAccount::GetInterest() const {
   return *interest;
}

void SavingsAccount::Print() const {
   cout << fixed << setprecision(2) << "$" << *saved << " with " << *interest * 100 << "\% interest rate" << endl;
}

int main() {
   double saved;
   double interest;

   cin >> saved;
   cin >> interest;

   SavingsAccount userAccount(saved, interest);
   
   SavingsAccount copyAccount(userAccount);
   
   copyAccount.SetSaved(copyAccount.GetSaved() * 2);
   copyAccount.SetInterest(copyAccount.GetInterest() * 2);

   cout << "userAccount: ";
   userAccount.Print();
   cout << "copyAccount: ";
   copyAccount.Print();

   return 0;
}