#include <iostream>
using namespace std;

/* Output all two-letter .com Internet domain names */

int main() {
   char letter1;
   char letter2;
   char num1;
   
   cout << "Two-letter domain names:" << endl;
   num1 = '0';
   letter1 = 'a';
   while (letter1 <= 'z') {
      letter2 = 'a';
      while (letter2 <= 'z') {
         cout << letter1 << letter2 << ".com" << endl;
         ++letter2;
      }
      while (num1 <= '9') {
         cout << letter1 << num1 << ".com" << endl;
         cout << num1 << letter1 << ".com" << endl;
         ++num1;
      }
      ++letter1;
   }
   
   return 0;
}
