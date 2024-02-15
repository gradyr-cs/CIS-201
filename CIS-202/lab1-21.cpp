/*
File: main.cpp
Description: This is a test program
Created: Thur. Feb 15, 2024, 1:30 PM
Author: Richard Grady
mail: gradyr@student.vvc.edu
*/

#include <iostream>
#include <cstring>
using namespace std;

void RemoveNonAlpha(char* userString) {
   for (int i = 0; i < strlen(userString); ++i) {
      if (!isalpha(userString[i])) {
         userString[i] = '';
      }
   }




}

int main() {
   string userInput;
   cout << "Enter a string to be processed: " << endl;
   cin >> userInput;

   RemoveNonAlpha(userInput);
   

   return 0;
}