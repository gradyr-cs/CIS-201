#include <iostream>
#include <vector>
using namespace std;

class Certificate {
   public:
      void ReadHolderAndDivision();
      void Print() const;
   private:
      string holder;
      char division;
};

void Certificate::ReadHolderAndDivision() {
	cin >> holder;
	cin >> division;
}

void Certificate::Print() const {
   cout << "Certificate: " << holder << ", Division: " << division << endl;
}

int main() {
   vector<Certificate> certificateList;
   Certificate currCertificate;
   int entryNumber;
   unsigned int i;

   cin >> entryNumber;
   
   while (entryNumber != -999) {
      currCertificate.ReadHolderAndDivision();
      certificateList.push_back(currCertificate);
      cin >> entryNumber;
   }

   for (i = 0; i < certificateList.size(); ++i) {
      currCertificate = certificateList.at(i);
      currCertificate.Print();
   }
   
   return 0;
}