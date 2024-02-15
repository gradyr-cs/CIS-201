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
   Dealership dealership;
   Dealership dealershipCopy;
   
   cin >> numCars;
   
   dealership.setNumCars(numCars);
   dealershipCopy = dealership;
   dealership.setNumCars(45);
   
   cout << "dealership: ";
   dealership.Print();
   cout << "dealershipCopy: ";
   dealershipCopy.Print();
   
   return 0;
}