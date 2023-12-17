#include <iostream>
using namespace std;

class Donkey {
   public:
      Donkey();
      void Print();

      int age;
      int weight;
};
Donkey::Donkey() {
   age = 0;
   weight = 0;
}
void Donkey::Print() {
   cout << "Donkey's age: " << age << endl;
   cout << "Donkey's weight: " << weight <<  endl;
}

int main() {
   int ageValue;
   int weightValue;
   
   Donkey* myDonkey = new Donkey();
  
   cin >> ageValue;
   cin >> weightValue;
  
   myDonkey->age = ageValue;
   myDonkey->weight = weightValue;
   
   myDonkey->Print();
   
   return 0;
}