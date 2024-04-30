/*
Write a program that lists all ways people can line up for a photo (all permutations of a list of strings). The program will read a list of one word names into vector nameList (until -1), and use a recursive function to create and output all possible orderings of those names separated by a comma, one ordering per line.

When the input is:

Julia Lucas Mia -1
then the output is (must match the below ordering):

Julia, Lucas, Mia 
Julia, Mia, Lucas 
Lucas, Julia, Mia 
Lucas, Mia, Julia 
Mia, Julia, Lucas 
Mia, Lucas, Julia
*/

/* 
    File: main.cpp
    Description: 6.10.1: LAB: All permutations of names
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis202
    Section#: 30402
    Date: 04-25-2024
*/

#include <vector>
#include <string>
#include <iostream>

using namespace std;

#define MrList1 cout << "processedList at index " << i << " contains" << processedList[i] << endl; 
#define MrList2 cout << "moddedNameList at index " << i << " contains" << moddedNameList[i] << endl; 

// TODO: Write function to create and output all permutations of the list of names.
// This recursive function will process the permutations of the names from the input list.

void PrintAllPermutations(const vector<string> &permList, const vector<string> &nameList) {
   bool commaKiller = true; // Checker to see if the comma is needed
   if (nameList.empty()) { // Checker to see if the nameList is empty
      for (const string &name : permList) { // use a range based loop to iterate and print through the permList vector
         if (!commaKiller) { // Bool established to check if the comma is needed at the end of the name list presented.
            cout << ", ";
         }
         else {
            commaKiller = false;
         }
         cout << name;
      }
   cout << endl;
   } 
   else {
      for (unsigned int i = 0; i < nameList.size(); i++) {
         vector<string> processedList = permList; // vector holder via copy constructor
         processedList.push_back(nameList[i]); // place the indexed name into the processedList vector
         //MrList1;
         vector<string> moddedNameList = nameList; // vector holder via copy constructor
         moddedNameList.erase(moddedNameList.begin() + i); // erase the indexed name from the moddedNameList vector
         //MrList2;
         PrintAllPermutations(processedList, moddedNameList); // Recurse the function with the modified vector elements
      }
   }
   
   
}

int main() {
   vector<string> nameList;
   vector<string> permList;
   string name;

   // TODO: Read a list of names into nameList; stop when -1 is read. Then call recursive function.
   cin >> name;
   // This function will get user input until -1 is entered, and add it to the nameList vector
   while (name != "-1") {
      nameList.push_back(name);
      
      cin >> name;
   }
   // The nameList is sent to the function with user input, the permList is empty
   PrintAllPermutations(permList, nameList);

   return 0;
}