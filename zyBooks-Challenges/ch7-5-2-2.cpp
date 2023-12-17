#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Animal {
   public:
      void SetSpecies(string animalSpecies);      
      void SetAge(int animalAge);      
      string GetSpecies() const;     
      int GetAge() const;        
   private:
      string species;
      int age;
};

void Animal::SetSpecies(string animalSpecies) {
   species = animalSpecies;
}

void Animal::SetAge(int animalAge) {
   age = animalAge;
}

string Animal::GetSpecies() const { //accessor is const, it only returns a value...
   return species;
}

int Animal::GetAge() const { //accessor is const, it only returns a value...
   return age;
}

int main() {
   Animal animal;
   string inputSpecies;
   int inputAge;

   cin >> inputSpecies;
   cin >> inputAge;
   animal.SetSpecies(inputSpecies);
   animal.SetAge(inputAge);

   cout << "Animal: " << animal.GetSpecies() << endl;
   cout << "Age: " << animal.GetAge() << " months old" << endl;

   return 0;
}