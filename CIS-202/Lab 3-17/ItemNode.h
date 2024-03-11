/* 
    File: ItemNode.h
    Description: 3.17.1: LAB: Grocery shopping list (linked list: inserting at the end of a list)
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis202
    Section#: 30402
    Date: 03-03-2024
*/

#ifndef MILEAGETRACKERNODEH
#define MILEAGETRACKERNODEH

#include <iostream>
#include <string>
using namespace std;

class ItemNode {
private:
	string item;
	ItemNode* nextNodeRef;

public:
	// Constructors
	ItemNode();                                                                             
	ItemNode(string itemInit);      
   	ItemNode(string itemInit, ItemNode *nextLoc);

	// Insert node after this node.     
   void InsertAfter(ItemNode &nodeLoc); 
   void InsertAtEnd(ItemNode* nodeLoc); // Declare the new function

	// Get location pointed by nextNodeRef                                                             
	ItemNode* GetNext();
	void PrintNodeData();
	string GetNodeItem();
};

#endif