#include <iostream>
using namespace std;

class Cone {
   public:
      Cone();
      void Read();
      void Print();
      ~Cone();
   private:
      int radius;
      int height;
};
Cone::Cone() {
   radius = 0;
   height = 0;
}
void Cone::Read() {
   cin >> radius;
   cin >> height;
}  
void Cone::Print() {
   cout << "Cone's radius: " << radius << endl;
   cout << "Cone's height: " << height << endl;
}  
Cone::~Cone() { // Covered in section on Destructors.
   cout << "Cone with radius " << radius << " and height " << height << " is deallocated." <<  endl;
}

int main() {
   Cone* myCone = nullptr;
   
   myCone = new Cone();
   myCone->Read();
   myCone->Print();
   delete myCone;

   return 0;
}