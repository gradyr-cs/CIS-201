#include <iostream>
#include <iomanip>
using namespace std;

class BallObject {
   public:
      BallObject();
      void Read();
      void Print();
      ~BallObject();
   private:
      double forceApplied;
      double contactArea;
};
BallObject::BallObject() {
   forceApplied = 0.0;
   contactArea = 0.0;
}
void BallObject::Read() {
   cin >> forceApplied;
   cin >> contactArea;
}
void BallObject::Print() {
   cout << "BallObject's forceApplied: " << fixed << setprecision(1) << forceApplied << endl;
   cout << "BallObject's contactArea: " << fixed << setprecision(1) << contactArea << endl;
}
BallObject::~BallObject() { // Covered in section on Destructors.
   cout << "BallObject with forceApplied " << forceApplied << " and contactArea " << contactArea << " is deallocated." <<  endl;
}

int main() {
   BallObject* myBallObjects = nullptr;
   int count;
   int i;
   
   cin >> count;
   myBallObjects = new BallObject[count];
   for (i = 0; i < count; ++i) {
      myBallObjects[i].Read();
      myBallObjects[i].Print();
   }
   
   
   delete[] myBallObjects;
  
   return 0;
}