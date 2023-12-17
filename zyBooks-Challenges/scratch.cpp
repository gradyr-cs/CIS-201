#include <iostream>
using namespace std;

class IntNode {
   public:
      IntNode(int value = -1, IntNode* nextLoc = nullptr);
      void InsertAfter(IntNode* nodeLoc);
      int GetValue();
      IntNode* GetNext();
      void PrintData();
   private:
      int value;
      IntNode* nextIntNodePtr;
};

IntNode::IntNode(int val, IntNode* nextLoc) {
   this->value = val;
   this->nextIntNodePtr = nextLoc;
   cout << "Debug: New Node containing " << val << " at mem addr " << this << endl;
}

void IntNode::InsertAfter(IntNode* nodeLoc) {
   IntNode* tmpNext = nullptr;

   tmpNext = this->nextIntNodePtr;
   this->nextIntNodePtr = nodeLoc;
   nodeLoc->nextIntNodePtr = tmpNext;
   cout << "Debug: New Node containing " << nodeLoc->GetValue() << " value " << this->GetValue() << endl;
}


int IntNode::GetValue() {
   return this->value;
}

IntNode* IntNode::GetNext() {
   return this->nextIntNodePtr;
}

void IntNode::PrintData() {
   cout << this->value << endl;
   cout << "Value: " << this->value << ", Memory Address: " << this << endl;
}

int main() {
   IntNode* headObj = nullptr;
   IntNode* node1 = nullptr;
   IntNode* node2 = nullptr;
   IntNode* node3 = nullptr;
   IntNode* node4 = nullptr;
   IntNode* currObj = nullptr;

   headObj = new IntNode(-1);

   node1 = new IntNode(1);
   headObj->InsertAfter(node1);

   node2 = new IntNode(15);
   node1->InsertAfter(node2);

   node3 = new IntNode(25);
   node2->InsertAfter(node3);

   node4 = new IntNode(33);
   node3->InsertAfter(node4);

   currObj = headObj;

   while (currObj != nullptr) {
      int listNum = 1;
      if (currObj->GetValue() < 20) {
         currObj->PrintData();
         cout << "Cycle Number: " << listNum << endl;
         listNum++;
      }
      currObj = currObj->GetNext();
   }

   return 0;
}