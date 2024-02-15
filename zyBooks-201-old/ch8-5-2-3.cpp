#include <iostream>
using namespace std;
  
class HareNode {
   public:
      HareNode(int babiesInit = 0, HareNode* nextLoc = nullptr);
      void InsertAfter(HareNode* nodeLoc);
      HareNode* GetNext();
      int GetNodeData();
   private:
      int babiesVal;
      HareNode* nextNodePtr;
};

HareNode::HareNode(int babiesInit, HareNode* nextLoc) {
   this->babiesVal = babiesInit;
   this->nextNodePtr = nextLoc;
}

void HareNode::InsertAfter(HareNode* nodeLoc) {
   HareNode* tmpNext = nullptr;

   tmpNext = this->nextNodePtr;
   this->nextNodePtr = nodeLoc;
   nodeLoc->nextNodePtr = tmpNext;
}

HareNode* HareNode::GetNext() {
   return this->nextNodePtr;
}

int HareNode::GetNodeData() {
   return this->babiesVal;
}

int main() {
   HareNode* headHare = nullptr;
   HareNode* currHare = nullptr;
   HareNode* lastHare = nullptr;
   int count;
   int inputValue;
   int i;
   
   cin >> count;
   
   headHare = new HareNode(count);
   lastHare = headHare;

   for (i = 0; i < count; ++i) {
      cin >> inputValue;
      
      currHare = new HareNode(inputValue);
      
      lastHare->InsertAfter(currHare);
      lastHare = currHare;
   }

   currHare = headHare->GetNext();
   while (currHare != nullptr) {
      int logChecker = currHare->GetNodeData();
      // comment out debugtool to please zyBooks post testing...
      cout << "Debug: logChecker = " << logChecker << endl;
      
      if (logChecker == 0) {
         cout << "Found a solitary hare with no babies." << endl;
      }
      currHare = currHare->GetNext();
      
   }
   
   
   return 0;
}
