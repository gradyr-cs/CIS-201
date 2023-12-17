#include <iostream>
#include <iomanip>
using namespace std;

class Dealership {
   public:
      Dealership();
      ~Dealership();
      void setDailyProfit(double newDailyProfit);
      void Print() const;
      Dealership& operator=(const Dealership& dealershipToCopy);
   private:
      double* dailyProfit;
};

Dealership::Dealership() {
   dailyProfit = new double;
	*dailyProfit = 0.0;
}

Dealership::~Dealership() {
   cout << "Destructor called" << endl;
   delete dailyProfit;
}

Dealership& Dealership::operator=(const Dealership& dealershipToCopy) {
   if (this != &dealershipToCopy) {
      delete dailyProfit;
      dailyProfit = new double;
      *dailyProfit = *(dealershipToCopy.dailyProfit);
   }
   
   return *this;
}

void Dealership::setDailyProfit(double newDailyProfit) {
	*dailyProfit = newDailyProfit;
}

void Dealership::Print() const {
   cout << fixed << setprecision(2) << "$" << *dailyProfit << " daily profit" << endl;
}

int main(){
   double dailyProfit;
   Dealership carDealership;
   Dealership carDealershipCopy;
   
   cin >> dailyProfit;
   
   carDealership.setDailyProfit(dailyProfit);
   carDealershipCopy = carDealership;
   carDealership.setDailyProfit(211.00);
   
   cout << "carDealership: ";
   carDealership.Print();
   cout << "carDealershipCopy: ";
   carDealershipCopy.Print();
   
   return 0;
}