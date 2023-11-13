#include <iostream>
#include <string>
using namespace std;

int main() {
   const string PROMPT_SALARY = "\nEnter annual salary (0 to exit): ";
   const string PROMPT_DEDUCTION = "Enter a deduction (0 to end deductions): ";
   int annualSalary;
   int oneDeduction;
   int totalDeductions;
   int adjustedSalary;
   double taxRate;
   int taxToPay;

   cout << PROMPT_SALARY << endl;
   cin >> annualSalary;

   while (annualSalary > 0) {
      totalDeductions = 0;    // Start with 0 for each annual salary
      cout << PROMPT_DEDUCTION << endl;
      cin >> oneDeduction;

      while (oneDeduction > 0) {
         totalDeductions += oneDeduction;
         cout << PROMPT_DEDUCTION << endl;
         cin >> oneDeduction;
      }

      // Determine the tax rate from the adjusted salary
      adjustedSalary = annualSalary - totalDeductions;
      if (adjustedSalary <= 0) {
         adjustedSalary = 0;
         taxRate = 0.0;
      }
      else if (adjustedSalary <= 20000) {
         taxRate = 0.10;   // 0.10 is 10% written as a decimal
      }
      else if (adjustedSalary <= 50000) {
         taxRate = 0.20;
      }
      else if (adjustedSalary <= 100000) {
         taxRate = 0.30;
      }
      else {
         taxRate = 0.40;
      }

      taxToPay = static_cast<int>(adjustedSalary * taxRate);  // Truncate tax to an integer amount
      cout << "Annual salary: " << annualSalary << endl;
      cout << "\nDeductions: " << totalDeductions << endl;
      cout << "Adjusted salary after deductions: " << adjustedSalary << endl;
      cout << "Tax rate: " << taxRate << endl;
      cout << "Tax to pay: " << taxToPay << endl;

      // Get the next annual salary
      cout << PROMPT_SALARY << endl;
      cin >> annualSalary;
   }

   return 0;
}