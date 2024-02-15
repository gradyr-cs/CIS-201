#include <iostream>
using namespace std;

class Town {
   public:
      Town();
      void SetFields(string newName, int newPopulation, char newTourism);
      void Print() const;
   private:
      string name;
      int population;
      char tourism;
};

Town::Town() : name("Unrecorded"), population(-100), tourism('?') {
}

void Town::SetFields(string newName, int newPopulation, char newTourism) {
   name = newName;
   population = newPopulation;
   tourism = newTourism;
}

void Town::Print() const {
   cout << "Town: " << name << ", Population: " << population << ", Tourism: " << tourism << endl;
}

int main() {
   string newName;
   int newPopulation;
   char newTourism;
   Town myTown;
  
   myTown.Print();
  
   cin >> newName;
   cin >> newPopulation;
   cin >> newTourism;
   myTown.SetFields(newName, newPopulation, newTourism);
   myTown.Print();
  
   return 0;
} 