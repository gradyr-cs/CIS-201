#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Weather {
   public:
      void SetFahrenheit(double weatherFahrenheit);      
      double GetFahrenheit() const;                        
      void PrintInCelsius();
   private:
      double fahrenheit;
      double ConvertToCelsius();                
};

void Weather::SetFahrenheit(double weatherFahrenheit) {
   fahrenheit = weatherFahrenheit;
}

double Weather::GetFahrenheit() const {
   return fahrenheit;
}

double Weather::ConvertToCelsius() {
   return (fahrenheit - 32) * 0.555;
}

void Weather::PrintInCelsius() {
   cout << fixed << setprecision(1) << ConvertToCelsius() << " degrees Celsius" << endl;
}

int main() {
   Weather weather1;
   double inputFahrenheit;

   cin >> inputFahrenheit;
   weather1.SetFahrenheit(inputFahrenheit);

   weather1.PrintInCelsius();

   return 0;
}