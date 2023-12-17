main.cpp

#include <iostream>
#include "Car.h"
using namespace std;

int main() {
   int userYear;
   int userPrice;
   int userCurrentYear;
   Car myCar;
      
   cin >> userYear;
   cin >> userPrice;
   cin >> userCurrentYear;
      
   myCar.SetModelYear(userYear);
   myCar.SetPurchasePrice(userPrice);
   myCar.CalcCurrentValue(userCurrentYear);
      
   myCar.PrintInfo();
   
   return 0;
}

---------------------
/* 
    File: Car.cpp 
    Description: 7.22.1: LAB: Car value (classes)
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis201
    Section#: 70107
    Date: 12-03-2023
*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include "Car.h"
using namespace std;

void Car::SetModelYear(int userYear){
   modelYear = userYear;
}

int Car::GetModelYear() {
   return modelYear;
}

// TODO: Implement SetPurchasePrice() function
void Car::SetPurchasePrice(int userPrice) {
   purchasePrice = userPrice;
}
// TODO: Implement GetPurchasePrice() function
int Car::GetPurchasePrice() {
   return purchasePrice;
}

void Car::CalcCurrentValue(int currentYear) {
   double depreciationRate = 0.15;
   int carAge = currentYear - modelYear;
      
   // Car depreciation formula
   currentValue = purchasePrice * pow((1 - depreciationRate), carAge);
}

// TODO: Implement PrintInfo() function to output modelYear, purchasePrice, and 
// currentValue
void Car::PrintInfo() {
   cout << "Car's information:" << endl;
   cout << "  Model year: " << modelYear << endl;
   cout << "  Purchase price: $" << purchasePrice << endl;
   cout << "  Current value: $" << fixed << setprecision(0) << currentValue << endl; // fixed pennies from double output
}

---------------------
/* 
    File: Car.h 
    Description: 7.22.1: LAB: Car value (classes)
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis201
    Section#: 70107
    Date: 12-03-2023
*/

#ifndef CARH
#define CARH

class Car {
   private:
      int modelYear; 
      // TODO: Declare purchasePrice member (int)
      int purchasePrice;
      double currentValue;
   
   public:
      void SetModelYear(int userYear);

      int GetModelYear();
   
      // TODO: Declare SetPurchasePrice() function
      void SetPurchasePrice(int userPrice);
      // TODO: Declare GetPurchasePrice() function
      int GetPurchasePrice();
      void CalcCurrentValue(int currentYear);
   
     // TODO: Declare PrintInfo() method to output modelYear, purchasePrice, and 
     // currentValue
     void PrintInfo();
   
};

#endif