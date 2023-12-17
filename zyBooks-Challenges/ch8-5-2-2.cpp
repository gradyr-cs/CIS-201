#include <iostream>
using namespace std;
  
class StateNode {
   public:
      StateNode(string codeInit = "", StateNode* nextLoc = nullptr);
      void InsertAfter(StateNode* nodeLoc);
      StateNode* GetNext();
      void PrintNodeData();
   private:
      string codeVal;
      StateNode* nextNodePtr;
};

StateNode::StateNode(string codeInit, StateNode* nextLoc) {
   this->codeVal = codeInit;
   this->nextNodePtr = nextLoc;
}

void StateNode::InsertAfter(StateNode* nodeLoc) {
   StateNode* tmpNext = nullptr;

   tmpNext = this->nextNodePtr;
   this->nextNodePtr = nodeLoc;
   nodeLoc->nextNodePtr = tmpNext;
}

StateNode* StateNode::GetNext() {
   return this->nextNodePtr;
}

void StateNode::PrintNodeData() {
   cout << this->codeVal << endl;
}

int main() {
   StateNode* headState = nullptr;
   StateNode* currState = nullptr;
   StateNode* lastState = nullptr;
   int stateCount;
   string inputValue;
   int i;

   cin >> stateCount;
   
   headState = new StateNode("code");
   lastState = headState;
   
   for (int i = 0; i < stateCount; ++i) {
      cin >> inputValue;
      currState = new StateNode(inputValue);
      lastState->InsertAfter(currState);
      lastState = currState; // swaps
   }

   currState = headState;
   while (currState != nullptr) {
      currState->PrintNodeData();
      currState = currState->GetNext();
   }

   return 0;
}