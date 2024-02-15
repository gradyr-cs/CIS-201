#include <iostream>
using namespace std;

class Distance {
   public:
      Distance(int mi = 0, int ft = 0);
      void Print() const;
      Distance operator+(Distance rhs);
   private:
      int miles;
      int feet;
};

Distance::Distance(int mi, int ft) {
   miles = mi;
   feet = ft;
}

// No need to accommodate for overflow or negative values
Distance Distance::operator+(Distance rhs) {

   Distance overload; // create instance
   overload.miles = miles + rhs.miles; // sum the variable and rhs input to the overflow operator
   overload.feet = feet + rhs.feet;

}

void Distance::Print() const {
   cout << miles << " miles, " << feet << " feet";
}

int main() {
   int mi1;
	int ft1;
	int mi2;
	int ft2;
   
   cin >> mi1;
	cin >> ft1;
	cin >> mi2;
	cin >> ft2;
   
   Distance distance1(mi1, ft1);
	Distance distance2(mi2, ft2);
   
   Distance sum = distance1 + distance2;
   
   distance1.Print();
	cout << endl;
	distance2.Print();
	cout << endl;
	cout << "Sum: ";
	sum.Print();
	cout << endl;
   
   return 0;
}