/* 
    File: main.cpp 
    Description: 5.19.1: LAB: Word frequencies
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis201
    Section#: 70107
    Date: 11-04-2023
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

   int i; // loop controllers
   int j;
   int sizeDet; // determine vector size from input
   string userInput; // console input filler

   cin >> sizeDet;

   vector<string> wordBank(sizeDet);
   vector<int> wordFreq(sizeDet);

   for (i = 0; i < wordBank.size(); ++i) { // console data input tool
      cin >> userInput;
      wordBank.at(i) = userInput;
   }

   for (i = 0; i < wordFreq.size(); ++i) { // count initializer
      wordFreq.at(i) = 1; // don't set zero, start the scale at 1 to represent the word already in that index of wordBank
   }

   // idea nestle two loops to cyclically search for each term and update the index in wordFreq with results via addition.
   /*

   Note to self: don't do this. Why try to shift one variable around when you can add a second for comparison?

   //wordBank.push_back(-1); // extend vector to allow analysis via logic
   for (i = 0; i < wordBank.size(); ++i) {
      wordFreq.at(i) = 1; // pre-assign, don't do this here.
      for (i = 0; i < wordBank.size() - 1; ++i) {
         if (wordBank.at(i) == wordBank.at(i + 1)) { //this shifts, but needs help to not create SIGABRT errors.
            wordFreq.at(i) = wordFreq.at(i) + 1;
         }
         else if (wordBank.at(i) == wordBank.at(wordBank.size())) {
            wordFreq.at(i) = wordFreq.at(i) + 1;
         }
      }
   }
   */
   
   for (i = 0; i < wordBank.size(); ++i) {
      for (j = 0; j < wordBank.size(); ++j) { // by using j instead of i, there is no need to shift the focus with i + 1 and if i != vec.at(i) etc...
         if (wordBank.at(i) == wordBank.at(j) && i != j) {
            wordFreq.at(i) = wordFreq.at(i) + 1;
         }
      }
   }

   // make outputter here
   for (i = 0; i < wordBank.size(); ++i) {
      cout << wordBank.at(i) << " - " << wordFreq.at(i) << endl;
   }

   return 0;
}
