#include <string>
#include <iostream>
using namespace std;

class Wild : public Animal {
   private:
      string species;

   public:
      Wild(string wildName, int wildAge, string wildSpecies) {
         this->name = wildName;
         this->age = wildAge;
         this->species = wildSpecies;
      }

      void printInfo() const {
         string nameAndAge = this->getNameAndAge();

         cout << nameAndAge << endl;
         cout << "Species: " << this->species << endl;
      }
};