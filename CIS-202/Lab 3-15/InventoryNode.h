/* 
    File: InventoryNode.h 
    Description: 3.15.1: LAB: Inventory (linked lists: insert at the front of a list)
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis202
    Section#: 30402
    Date: 03-03-2024
*/

#include <iostream>
#include <string>
using namespace std;

class InventoryNode {
private:
	string item;
	int numberOfItems;
	InventoryNode *nextNodeRef;

public:
	//Constructor
	InventoryNode() {
		this->item = "head";
		this->numberOfItems = -1;
		this->nextNodeRef = nullptr;
	}

	//Constructor
	InventoryNode(string itemInit, int numberOfItemsInit) {
		this->item = itemInit;
		this->numberOfItems = numberOfItemsInit;
		this->nextNodeRef = nullptr;
	}

	//Constructor
	InventoryNode(string itemInit, int numberOfItemsInit, InventoryNode nextLoc) {
		this->item = itemInit;
		this->numberOfItems = numberOfItemsInit;
		this->nextNodeRef = &nextLoc;
	}


	// TODO: Define InsertAtFront() member function that inserts a node at the 
	//       front of the linked list (after the head node)
	void InsertAtFront(InventoryNode* &headNode, InventoryNode* newNode) { // pass by reference
    newNode->nextNodeRef = headNode->nextNodeRef; // newNode becomes the node -after- the headnode
    headNode->nextNodeRef = newNode;
    }


	//Get the next node
	InventoryNode *GetNext() {
		return this->nextNodeRef;
	}

	//Print node data
	void PrintNodeData() {
		cout << this->numberOfItems << " " << this->item << endl;
	}
};