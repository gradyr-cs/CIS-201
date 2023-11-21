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

int GetWordFrequency(vector<string>& wordsList, string& currWord) {
    //string modCurrWord = currWord.at(0)
    
    for (int i = 0; i < wordsList.size(); ++i) {
      for (int j = 0; j < wordsList.size(); ++j) { 
         if (wordsList.at(i) == wordsList.at(j) && i != j) {
            wordFreq.at(i) = wordFreq.at(i) + 1;
         }
      }
   }
   return 0;
}

int main() {
    int vecSize;
    string vecFiller;
    string currWord;
    vector<string> wordsList;
    vector<string> wordFreq;
    

    cin >> vecSize;

    wordsList.resize(vecSize);
    wordFreq = wordsList;

    for (int i = 0; i < wordsList.size(); ++i) {
        cin >> vecFiller;
        wordsList[i] = vecFiller;
    }

    GetWordFrequency(wordsList, currWord);

    // make outputter here
   for (int i = 0; i < wordsList.size(); ++i) {
      cout << wordsList.at(i) << " " << wordFreq.at(i) << endl;
   }

    return 0;
}
