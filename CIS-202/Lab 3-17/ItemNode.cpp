/* 
    File: ItemNode.cpp
    Description: 3.17.1: LAB: Grocery shopping list (linked list: inserting at the end of a list)
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis202
    Section#: 30402
    Date: 03-03-2024
*/

#include "ItemNode.h"

// Constructor
ItemNode::ItemNode() {
    item = "";
    nextNodeRef = NULL;
}

// Constructor                                                                                     
ItemNode::ItemNode(string itemInit) {
    item = itemInit;
    nextNodeRef = NULL;
}

// Constructor        
ItemNode::ItemNode(string itemInit, ItemNode *nextLoc) {
    item = itemInit;
    nextNodeRef = nextLoc;
}

// Insert node after this node.     
void ItemNode::InsertAfter(ItemNode &nodeLoc) {
    ItemNode* tmpNext;
    
    tmpNext = nextNodeRef;
    nextNodeRef = &nodeLoc;
    nodeLoc.nextNodeRef = tmpNext;
}

// TODO: Define the InsertAtEnd() member function that inserts a parameter ItemNode
//       to the end of the linked list
// This function will iterate through the list and advance currNode to the the last position
void ItemNode::InsertAtEnd(ItemNode *nodeLoc) {
    ItemNode* currNode = this; 
    // traverse the list until currNode indicates the null position
    while (currNode->nextNodeRef != nullptr) {
        currNode = currNode->nextNodeRef; // advance the list position
    }
    currNode->InsertAfter(*nodeLoc); // place the referenced nodeLoc value at the end of the list, list grows by one extension
}


// Get location pointed by nextNodeRef                                                             
ItemNode* ItemNode::GetNext() {
    return nextNodeRef;
}

// Print data of this node
void ItemNode::PrintNodeData() {
    cout << item << endl;
}

// Get data of this node
string ItemNode::GetNodeItem() {
    return item;
}