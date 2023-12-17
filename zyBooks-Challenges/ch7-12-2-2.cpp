#include <iostream>
using namespace std;

class Town {
   public:
      Town();
      Town(string newName, int newPopulation, char newTourism);
      void Print() const;
   private:
      string name;
      int population;
      char tourism;
};

Town::Town() : name("Unknown"), population(-10), tourism('?') {
}

Town::Town(string newName, int newPopulation, char newTourism) : name(newName), population(newPopulation), tourism(newTourism) {
}

void Town::Print() const {
   cout << "Town: " << name << ", Population: " << population << ", Tourism: " << tourism << endl;
}

int main() {
   Town myTown;
   string newName;
   int newPopulation;
   char newTourism;
  
   cin >> newName;
   cin >> newPopulation;
   cin >> newTourism;
   Town yourTown(newName, newPopulation, newTourism);

   myTown.Print();
   yourTown.Print();
  
   return 0;
} 