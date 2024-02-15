/*
Read four strings from input and call PrintStateCode() twice: once with the first and third inputs as arguments, and again with the second and fourth inputs as arguments.

Ex: If the input is IN LA Indiana Louisiana, then the output is:

IN is Indiana's state code.
LA is Louisiana's state code.
*/

#include <iostream>
using namespace std;

void PrintStateCode(string state_code, string state_name) {
   cout << state_code << " is " << state_name << "'s state code." << endl;
}

int main() {

   string code1, code2, name1, name2;
   cin >> code1 >> code2 >> name1 >> name2;
   
   PrintStateCode(code1, name1);
   PrintStateCode(code2, name2);

   return 0;
}