#include <iostream>
#include <string>
using namespace std;

class Animal {
   public:
      Animal();
      Animal(string animalType, string animalColor, int animalAge);
      void Print();
   
   private:
      string type;
      string color;
      int age;
};

// Default constructor
Animal::Animal() {
   type = "None";
   color = "Unknown";
   age = 0;
}

Animal::Animal(string type, string color, int age) {
   
}

void Animal::Print() {
   cout << "Animal: " << type << ", " << color << ", " << age << endl;
}

int main() {
   string animalType;
   string animalColor;
   int animalAge;
   
   cin >> animalType;
   cin >> animalColor;
   cin >> animalAge;
   
   Animal emptyAnimal;
   Animal animal1(animalType, animalColor, animalAge);
   
   emptyAnimal.Print();
   animal1.Print();

   return 0;
}