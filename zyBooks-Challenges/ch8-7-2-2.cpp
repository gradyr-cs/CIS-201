#include <iostream>
using namespace std;

class MuskratNode {
   public:
      MuskratNode(int kitsValue);
      ~MuskratNode();

      int kits;
      MuskratNode* next;
};

MuskratNode::MuskratNode(int kitsValue) {
   kits = kitsValue;
}

MuskratNode::~MuskratNode() {
   cout << "Deallocating MuskratNode with " << kits << " kits." << endl;
}

class MuskratsList {
   public:
      MuskratsList();
      ~MuskratsList();
      void Prepend(int kitsValue);
   private:
      MuskratNode* head;
};

MuskratsList::MuskratsList() {
   head = nullptr;
}

MuskratsList::~MuskratsList() {
   cout << "In MuskratsList destructor" << endl;
   MuskratNode* decon = head; // hmmm
   while (decon != nullptr) { // cycle through and decon the rats
      MuskratNode* next = decon->next;
      delete decon;
      decon = next; // rat killer?
   }
}

void MuskratsList::Prepend(int kitsValue) {
   MuskratNode* newNode = new MuskratNode(kitsValue);
   newNode->next = head;
   head = newNode;
}

int main() {
   MuskratsList* myMuskrats = new MuskratsList();
   int inputValue;
   int muskratCount;
   int i;
  
   cin >> muskratCount;
  
   for (i = 0; i < muskratCount; i++) {
      cin >> inputValue;
      myMuskrats->Prepend(inputValue);
   }

   delete myMuskrats;
  
   return 0;
}