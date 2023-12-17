#include <iostream>
using namespace std;

class Dealership {
   public:
      Dealership();
      ~Dealership();
      void setNumCars(int newNumCars);
      void Print() const;
      Dealership& operator=(const Dealership& dealershipToCopy);
   private:
      int* numCars;
};

Dealership::Dealership() {
   numCars = new int;
	*numCars = 0;
}

Dealership::~Dealership() {
   cout << "Destructor called" << endl;
   delete numCars;
}

Dealership& Dealership::operator=(const Dealership& dealershipToCopy) {
	if (this != &dealershipToCopy) {
      delete numCars;
		numCars = new int;
		*numCars = *(dealershipToCopy.numCars);
   }
   else {
      cout << "Self-assignment not permitted" << endl;
   }
   
   return *this;
}

void Dealership::setNumCars(int newNumCars) {
	*numCars = newNumCars;
}

void Dealership::Print() const {
   cout << *numCars << " cars" << endl;
}

int main(){
   int numCars;
   Dealership carDealership;
   Dealership carDealershipCopy;
   
   cin >> numCars;
   
   carDealership.setNumCars(numCars);
   carDealership = carDealership;  // Test self-assignment
   carDealershipCopy = carDealership;
   carDealership.setNumCars(73);
   
   cout << "carDealership: ";
   carDealership.Print();
   cout << "carDealershipCopy: ";
   carDealershipCopy.Print();
   
   return 0;
}