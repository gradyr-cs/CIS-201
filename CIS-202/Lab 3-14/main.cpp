/* 
    File: main.cpp 
    Description: 3.14.1: LAB: Mileage tracker for a runner
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis202
    Section#: 30402
    Date: 03-03-2024
*/

#include "MileageTrackerNode.h"
#include <string>
#include <iostream>

using namespace std;

int main () {
   // References for MileageTrackerNode objects
   MileageTrackerNode* headNode;
   MileageTrackerNode* currNode;
   MileageTrackerNode* lastNode;

   double miles;
   string date;
   unsigned int i;
   int userNodes;

   // Front of nodes list
   headNode = new MileageTrackerNode();
   // End of nodes list
   lastNode = headNode;

   // get the number of nodes from the user
   cin >> userNodes;

   // This loop gathers user input from console, and 
   for (i = 0; i < userNodes; ++i) {
      cin >> miles;
      cin >> date;
      
      currNode = new MileageTrackerNode(miles, date);
      lastNode->InsertAfter(currNode);
      lastNode = currNode;
   }
   

   // TODO: Print the entire linked list with PrintNodeData() function calls  
   currNode = headNode->GetNext(); // shift list position past the head, per instructions.
   while (currNode != nullptr) { // While NOT at end of the 'list'
      currNode->PrintNodeData(); // output current node contents
      currNode = currNode->GetNext(); // advance to next node, until nullptr is detected.
   }
   

   // MileageTrackerNode Destructor deletes all following nodes
   delete headNode;
   
   return 0;
}