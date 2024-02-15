#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Restaurant {
   public:
      void SetName(string restaurantName);      
      void SetCity(string restaurantCity);     
      void Print() const;   
   private:
      string name;
      string city;
};

void Restaurant::SetName(string inputName) {
   name = inputName + "\'s Bakery";
}

void Restaurant::SetCity(string inputCity) {
   city = inputCity;
}

void Restaurant::Print() const {
   cout << "Restaurant: " << name << endl;
   cout << "City: " << city << endl;
}

int main() {
   Restaurant restaurant;
   string inputName;
   string inputCity;

   cin >> inputName;
   cin >> inputCity;
   restaurant.SetName(inputName);
   restaurant.SetCity(inputCity);

   restaurant.Print();

   return 0;
}