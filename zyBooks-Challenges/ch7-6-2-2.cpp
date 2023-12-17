#include <iostream>
#include <string>
using namespace std;

class RentalCar {
   public:
      RentalCar();
      void SetRenter(string rentalCarRenter);
		void SetWeekendPrice(char rentalCarWeekendPrice);
		void SetMileage(int rentalCarMileage);
      void Print();

   private:
      string renter;
		char weekendPrice;
		int mileage;
};

RentalCar::RentalCar() { // default constructor
   renter = "Incomplete"; // initialize data members with values
   weekendPrice = 'N'; // types already declared in private: no need to indicate the type here...
   mileage = 1;
}

void RentalCar::SetRenter(string rentalCarRenter) {
	renter = rentalCarRenter;
}

void RentalCar::SetWeekendPrice(char rentalCarWeekendPrice) {
	weekendPrice = rentalCarWeekendPrice;
}

void RentalCar::SetMileage(int rentalCarMileage) {
	mileage = rentalCarMileage;
}

void RentalCar::Print() {
   cout << "Renter: " << renter << ", Weekend price: " << weekendPrice << ", Mileage: " << mileage << endl;
}

int main() {
   string newRenter;
	char newWeekendPrice;
	int newMileage;
   RentalCar rentalCar1;

   rentalCar1.Print();
   
   cin >> newRenter;
	cin >> newWeekendPrice;
	cin >> newMileage;

   rentalCar1.SetRenter(newRenter);
	rentalCar1.SetWeekendPrice(newWeekendPrice);
	rentalCar1.SetMileage(newMileage);

   rentalCar1.Print();

   return 0;
}