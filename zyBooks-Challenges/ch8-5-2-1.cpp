#include <iostream>
using namespace std;

// Class representing a node in a linked list
class TownNode {
   public:
      // Constructor with default values for initialization
      TownNode(int neighborsInit = 0, TownNode* nextLoc = nullptr);
      
      // Function to insert a new node after the current node
      void InsertAfter(TownNode* nodeLoc);
      
      // Function to get the next node in the linked list
      TownNode* GetNext();
      
      // Function to print the data of the current node
      void PrintNodeData();

   private:
      // Data representing the number of neighbors
      int neighborsVal;

      // Pointer to the next node in the linked list
      TownNode* nextNodePtr;
};

// Constructor implementation
TownNode::TownNode(int neighborsInit, TownNode* nextLoc) {
   this->neighborsVal = neighborsInit;
   this->nextNodePtr = nextLoc;
}

// Function to insert a new node after the current node
void TownNode::InsertAfter(TownNode* nodeLoc) {
   TownNode* tmpNext = nullptr;

   // Store the current next node in a temporary variable
   tmpNext = this->nextNodePtr;
   
   // Set the next node of the current node to the new node
   this->nextNodePtr = nodeLoc;
   
   // Set the next node of the new node to the stored next node
   nodeLoc->nextNodePtr = tmpNext;
}

// Function to get the next node in the linked list
TownNode* TownNode::GetNext() {
   return this->nextNodePtr;
}

// Function to print the data of the current node
void TownNode::PrintNodeData() {
   cout << this->neighborsVal << endl;
}

int main() {
   // Pointers to represent nodes in the linked list
   TownNode* headObj = nullptr;
   TownNode* firstTown = nullptr;
   TownNode* secondTown = nullptr;
   TownNode* currTown = nullptr;
   
   // Variables to store input values
   int neighbors1;
   int neighbors2;

   // Read input values
   cin >> neighbors1;
   cin >> neighbors2;

   // Create the head node with a default value of -1
   headObj = new TownNode(-1);

   // Create the first town node with the specified number of neighbors
   firstTown = new TownNode(neighbors1);
   
   // Insert the first town node after the head node
   headObj->InsertAfter(firstTown);

   // Create the second town node with the specified number of neighbors
   secondTown = new TownNode(neighbors2);
   
   // Insert the second town node after the first town node
   firstTown->InsertAfter(secondTown);

   // Start at the head of the linked list
   currTown = headObj;
   
   // Traverse the linked list and print the data of each node
   while (currTown != nullptr) {
      currTown->PrintNodeData();
      currTown = currTown->GetNext();
   }

   return 0;
}
