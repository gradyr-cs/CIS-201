#include <iostream>
#include <iomanip>
using namespace std;

class SavingsAccount {
   public:
      SavingsAccount(double startingSaved = 0.0, double startingRate = 0.0);
      SavingsAccount(const SavingsAccount& acc);
      void SetSaved(double newSaved);
      void SetRate(double newRate);#include <iostream>
using namespace std;

class CarCounter {
   public:
      CarCounter();
      CarCounter(const CarCounter& origCarCounter);
      void SetCarCount(const int count) {
          carCount = count;
      }
      int GetCarCount() const {
          return carCount;
      }
   private:
      int carCount;
};

CarCounter::CarCounter() {
   carCount = 0;
}

// FIXME add copy constructor

CarCounter::CarCounter(const CarCounter& origCarCounter){
   this->carCount = origCarCounter.carCount;
}

void CountPrinter(CarCounter carCntr) {
   cout << "Cars counted: " << carCntr.GetCarCount();
}

int main() {
   CarCounter parkingLot;
   int count;

   cin >> count;

   parkingLot.SetCarCount(count);
   CountPrinter(parkingLot);

   return 0;
}
      double GetSaved() const;
      double GetRate() const;
      void Print() const;
   private:
      double* saved;
      double* rate;
};

SavingsAccount::SavingsAccount(double startingSaved, double startingRate) {
   saved = new double(startingSaved);
   rate = new double(startingRate);
}



void SavingsAccount::SetSaved(double newSaved) {
   *saved = newSaved;
}

void SavingsAccount::SetRate(double newRate) {
   *rate = newRate;
}

double SavingsAccount::GetSaved() const {
   return *saved;
}

double SavingsAccount::GetRate() const {
   return *rate;
}

void SavingsAccount::Print() const {
   cout << fixed << setprecision(2) << "$" << *saved << " with " << *rate << " interest rate" << endl;
}

void SimulateGrowth(SavingsAccount c, int months) {
   for (auto i = 1; i <= months; ++i) {
      c.SetSaved(c.GetSaved() * (c.GetRate() + 1.0));
      cout << "After " << i << " month(s): " <<  "$" << c.GetSaved() << endl;
   }
}

int main() {
   double saved;
   double rate;

   cin >> saved;
   cin >> rate;

   SavingsAccount mySavingsAccount(saved, rate);
   SavingsAccount mySavingsAccountCopy = mySavingsAccount;
   mySavingsAccount.SetRate(rate + 1.0);
   
   cout << "Initial amount saved: ";
   mySavingsAccount.Print();
   SimulateGrowth(mySavingsAccount, 4);
   cout << endl;
   cout << "Custom value interest rate" << endl;
   mySavingsAccountCopy.Print();

   return 0;
}