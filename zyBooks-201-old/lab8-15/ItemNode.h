/* 
    File: main.cpp 
    Description: 8.15.1: LAB: Grocery shopping list (linked list: inserting at the end of a list)
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis201
    Section#: 70107
    Date: 12-14-2023
*/

#include <iostream>
#include <string>
using namespace std;

class ItemNode {
private:
	string item;
	ItemNode* nextNodeRef;

public:
	// Constructor
	ItemNode() {
		item = "";
		nextNodeRef = NULL;
	}

	// Constructor                                                                                     
	ItemNode(string itemInit) {
		this->item = itemInit;
		this->nextNodeRef = NULL;
	}

	// Constructor        
   ItemNode(string itemInit, ItemNode *nextLoc) {
      this->item = itemInit;
      this->nextNodeRef = nextLoc;
   }

	// Insert node after this node.     
   void InsertAfter(ItemNode &nodeLoc) {
      ItemNode* tmpNext;
      
      tmpNext = this->nextNodeRef;
      this->nextNodeRef = &nodeLoc;
      nodeLoc.nextNodeRef = tmpNext;
   }
	
	// TODO: Define InsertAtEnd() function that inserts a node
	//       to the end of the linked list
	void InsertAtEnd(ItemNode* newNode) { 
		if (this->nextNodeRef == NULL) { // NULL -vs- nullptr.
			this->nextNodeRef = newNode; //
		}
		else {
			ItemNode* listPlace = this->nextNodeRef;
			while (listPlace->nextNodeRef != NULL) { // if not at list end, advance.
				listPlace = listPlace->nextNodeRef;
			}
			listPlace->nextNodeRef = newNode; // direct insertion
		}
	}
	

	// Get location pointed by nextNodeRef                                                             
	ItemNode* GetNext() {
		return this->nextNodeRef;
	}

	void PrintNodeData() {
		cout << this->item << endl;
	}
};