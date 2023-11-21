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

   // modify vector to match case check
   for (int i = 0; i < wordsList.size(); ++i) {
      string wordChecker = wordsList[i];

      // convert each character in the vector element to lowercase
      for (int j = 0; j < wordChecker.length(); ++j) {
         wordChecker[j] = tolower(wordChecker[j]);
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

   cin >> vecSize;

   vector<string> wordsList(vecSize);
   
   for (int i = 0; i < wordsList.size(); ++i) {
      cin >> vecFill;
      wordsList[i] = vecFill;
   }

   for (int i = 0; i < wordsList.size(); ++i) {
      cout << wordsList[i] << " " << GetWordFrequency(wordsList, wordsList[i]) << endl;
   }

   return 0;
}