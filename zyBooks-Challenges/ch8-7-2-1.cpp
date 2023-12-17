#include <iostream>
using namespace std;

class AntelopeNode {
   public:
      AntelopeNode(int calvesValue) {
         calves = calvesValue;
      }
      
      ~AntelopeNode() { // build deconstructor here...
         cout << "Deallocating AntelopeNode with " << calves << " calves." << endl;
      }
      
      int calves;
      AntelopeNode* next;
};

int main() {
   AntelopeNode* myAntelope;
   int inputValue;

   cin >> inputValue;

   myAntelope = new AntelopeNode(inputValue);
   delete myAntelope;
  
   return 0;
}