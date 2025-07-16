#include<iostream>
using namespace std;

// Node class represents each element (node) of the linked list
class Node {
public:
    int data;       // Stores the value
    Node* next;     // Pointer to the next node in the list

    // Constructor to initialize a node with data and set next to NULL
    Node(int val) {
        data = val;
        next = NULL;
    }
};

// List class to manage the linked list operations
class list {
private:
    Node* head;     // Points to the first node of the list
    Node* tail;     // Points to the last node (for O(1) push_back)

public:
    // Constructor initializes an empty list
    list() {
        head = tail = NULL;  // Both head and tail are null initially
    }

    // Function to insert a new node at the end of the list
    void push_back(int val) {
        Node* newnode = new Node(val);  // Create a new node

        if (head == NULL) {
            // If list is empty, both head and tail point to the new node
            head = tail = newnode;
            return;
        } else {
            // If list already has elements:
            tail->next = newnode;   // Link the new node after current tail
            tail = newnode;         // Update tail to the new node
        }
    }

    // Function to print all elements of the list
    void print() {
        Node* temp = head;  // Start from the head

        while (temp != NULL) {
            cout << temp->data << "->";  // Print data
            temp = temp->next;           // Move to the next node
        }

        cout << "Null" << endl;  // Mark the end of the list
    }
};

int main() {
    list LL;  // Create a linked list object

    // Insert elements at the end
    LL.push_back(23);
    LL.push_back(21);
    LL.push_back(12);

    // Print the linked list
    LL.print();

    return 0;
}
