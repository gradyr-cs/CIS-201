#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Restaurant {
   public:
      void SetName(string restaurantName); 
      void SetCity(string restaurantCity);      
      string GetName() const;                        
      string GetCity() const;                        
      void Print() const;              
   private:
      string name;
      string city;
};

void Restaurant::SetName(string restaurantName) {
   name = restaurantName + "'s Delicatessen";
}

void Restaurant::SetCity(string restaurantCity) {
   city = restaurantCity;
}

string Restaurant::GetName() const {
   return name;
}

string Restaurant::GetCity() const {
   return city;
}

int main() {
   Restaurant restaurant;
   string inputName;
   string inputCity;

   cin >> inputName;
   cin >> inputCity;
   
   restaurant.SetName(inputName);
   restaurant.SetCity(inputCity);
 
   cout << "Restaurant: " << restaurant.GetName();
   cout << " is located in " << restaurant.GetCity() << endl;

   return 0;
}