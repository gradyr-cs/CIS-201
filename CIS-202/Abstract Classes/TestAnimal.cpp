#include "Animal.h"
#include "Domestic.h"
#include "Wild.h"
using namespace std;

int main() {
   Domestic myDomestic = Domestic("Blue", 10, "Maddi");
   Wild myWild = Wild("Leo", 6, "Lion");

   myDomestic.printInfo();
   cout << endl;
   myWild.printInfo();
}