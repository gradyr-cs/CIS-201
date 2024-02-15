/* 
    File: main.cpp 
    Description: 6.23.1: LAB: Word frequencies - functions
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis201
    Section#: 70107
    Date: 11-18-2023
*/

#include <iostream>
#include <vector> 
#include <string>
#include <cctype>
using namespace std;

int GetWordFrequency(vector<string> wordsList, string currWord) {
   int wordCount = 0;
   
   // convert currWord contents to lower
   for (int i = 0; i < currWord.length(); ++i) {
      currWord[i] = tolower(currWord[i]);      
   }

   //cout << "Debug: " << currWord << " is the current value." << endl;

   // modify vector to match case check
   for (int i = 0; i < wordsList.size(); ++i) {
      string wordChecker = wordsList[i];

      for (int j = 0; j < wordChecker.length(); ++j) { 
         wordChecker[j] = tolower(wordChecker[j]); // don't forget to lower properly, don't overwrite before the logic...
      }

      if (wordChecker == currWord) {
         wordCount++;
      }
   }

   return wordCount;
}

int main() {
   int vecSize;
   string vecFill;
   // comment out next line to please the zyBooks grader bot.
   //cout << "Enter vector size: ";
   cin >> vecSize;

   vector<string> wordsList(vecSize);
   
   // comment out next line to please the zyBooks robot guy...
   //cout << "Enter the " << vecSize << " strings, pressing enter after each entry to fill the vector." << endl;
   
   for (int i = 0; i < wordsList.size(); ++i) {
      cin >> vecFill;
      wordsList[i] = vecFill;
   }

   // Now generate a loop that calls GetWordFrequency with vector index and the associated search word, return the results:
   for (int i = 0; i < wordsList.size(); ++i) {
      cout << wordsList[i] << " " << GetWordFrequency(wordsList, wordsList[i]) << endl; // pass the data into the function

   }

   // Debug: the vector contents test unit:
   /*
   for (int i = 0; i < wordsList.size(); ++i) {
      cout << wordsList[i] << endl;
   }
   */



   return 0;
}
