#include <iostream>
using namespace std;

// Node class for the linked list
class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int value) : data(value), next(nullptr) {}
};

// LinkedList class
class LinkedList {
private:
    Node* head;

public:
    // Constructor
    LinkedList() : head(nullptr) {}

    // Destructor to deallocate memory used by the linked list
    ~LinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* nextNode = current->next;
            delete current;
            current = nextNode;
        }
        head = nullptr;
    }

    // Function to insert a new node at the end of the linked list
    void insertNode(int value) {
        // Create a new node
        Node* newNode = new Node(value);

        // If the list is empty, make the new node the head
        if (head == nullptr) {
            head = newNode;
        } else {
            // Traverse to the end of the list and insert the new node
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // Function to display the elements of the linked list
    void displayList() const {
        const Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    // Initialize a linked list
    LinkedList linkedList;

    // Insert elements into the linked list
    linkedList.insertNode(10);
    linkedList.insertNode(20);
    linkedList.insertNode(30);

    // Display the linked list
    cout << "Linked List: ";
    linkedList.displayList();

    // The destructor of the LinkedList class will automatically deallocate memory

    return 0;
}
