#include <iostream>
using namespace std;

class CablePlan{
   public:
      void  SetNumDays(int numDays);
      int   GetNumDays() const;
   private:
      int   numDays;
};

// FIXME: Define SetNumDays() member function, using "this" implicit parameter.
void CablePlan::SetNumDays(int numDays) {

   this->numDays = numDays;

}

int CablePlan::GetNumDays() const {
   return numDays;
}

int main() {
   CablePlan house1Plan;
   int userNum;

   cin >> userNum;
   house1Plan.SetNumDays(userNum);
   cout << house1Plan.GetNumDays() << endl;

   return 0;
}