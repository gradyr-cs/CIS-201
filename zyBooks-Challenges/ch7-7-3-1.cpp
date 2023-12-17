#include <iostream>
#include <vector>
using namespace std;

class License {
   public:
      void SetStateAndFee(string newState, int newFee);
		int GetFee() const;
   private:
      string state;
      int fee;
};

void License::SetStateAndFee(string newState, int newFee) {
   state = newState;
   fee = newFee;
}

int License::GetFee() const {
	return fee;
}

int main() {
   vector<License> licenseList;
   License currLicense;
   string currState;
   int currFee;
	int maximumFee;
   int licenseCount;
   unsigned int i;

   cin >> licenseCount;
   for (i = 0; i < licenseCount; ++i) {
      cin >> currState;
      cin >> currFee;
      
      currLicense.SetStateAndFee(currState, currFee);
      licenseList.push_back(currLicense);
   }
	
	maximumFee = licenseList.at(0).GetFee();

   cout << "Maximum license fee: " << maximumFee << endl;

   return 0;
}