/*
Define a function PrintAirportInfo() that has two string parameters and outputs as follows. End with a newline. PrintAirportInfo() should not return any value.

Ex: If the input is EWR Newark, then the output is:

EWR is Newark's airport code.
*/

#include <iostream>
using namespace std;

void PrintAirportInfo(string airportCode, string airportName) {
   
   cout << airportCode << " is " << airportName << "\'s airport code." << endl;
   
}

int main() {
   string inputCode;
   string inputAirport;

   cin >> inputCode;
   cin >> inputAirport;

   PrintAirportInfo(inputCode, inputAirport);

   return 0;
}