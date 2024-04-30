/*
Write a recursive function called PrintLinkedList() that outputs the integer value of each node in a linked list. Function PrintLinkedList() has one parameter, the first node (after the head node) of a list. The main program reads the size of the linked list, followed by the values in the list. Assume the linked list has at least 1 node and that all values will be positive.

Ex: If the input of the program is:

5 1 2 3 4 5
the output of the PrintLinkedList() function is:

1, 2, 3, 4, 5,
Hint: Output the value of the current node, then call the PrintLinkedList() function repeatedly until the end of the list is reached. Refer to the IntNode class to explore any available member functions that can be used for implementing the PrintLinkedList() function.


*/

/* 
    File: main.cpp
    Description: 6.14.1: LAB: Output a linked list
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis202
    Section#: 30402
    Date: 04-25-2024
*/

#include <iostream>
#include "IntNode.h"
using namespace std;

/* TODO: Write recursive PrintLinkedList() function here. */
void PrintLinkedList(IntNode* node) {
    if (node == nullptr) {
        cout << endl;
    } else {
        cout << node->GetData() << ", ";
        PrintLinkedList(node->GetNext());
    }
}


int main() {
   int size;
   int value;
   
   cin >> size;
   IntNode* headNode = new IntNode(-1);   // Make head node as the first node
   IntNode* lastNode = headNode;          // Node to add after
   IntNode* newNode = nullptr;               // Node to create

   // Insert the nodes
   for (int n = 0; n < size; ++n) {
      cin >> value;
      newNode = new IntNode(value);
      lastNode->InsertAfter(newNode);
      lastNode = newNode;
   }

   // Call PrintLinkedList() with node after head node
   PrintLinkedList(headNode->GetNext());
   
   return 0;
}