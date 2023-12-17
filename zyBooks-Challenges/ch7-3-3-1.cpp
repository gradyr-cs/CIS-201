#include <iostream>
using namespace std;

class Member {
   public:
      double GetHeight() const;
      int GetNumPoints() const;
      /* Member function declarations go here */
   private:
      /* Data members go here */
};

void Member::SetHeight(double customHeight) {
   height = customHeight;
}

void Member::SetNumPoints(int customNumPoints) {   
   numPoints = customNumPoints;
}

double Member::GetHeight() const {
   return height;
}

int Member::GetNumPoints() const {
   return numPoints;
}

int main() {
   Member member1;
   double inputHeight;
   int inputNumPoints;

   cin >> inputHeight;
   cin >> inputNumPoints;

   member1.SetHeight(inputHeight);
   member1.SetNumPoints(inputNumPoints);
   
   cout << "Height: " << member1.GetHeight() << endl;
   cout << "Number of points: " << member1.GetNumPoints() << endl;

   return 0;
}