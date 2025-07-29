#include<iostream>
using namespace std;

// Node class represents each element (node) in the linked list
class Node {
public:
    int data;      // Stores data of the node
    Node* next;    // Pointer to the next node

    // Constructor to initialize a new node with value 'val'
    Node(int val) {
        data = val;
        next = NULL;
    }
};

// list class manages the linked list operations
class list {
private:
    Node* Head;    // Points to the first node in the list
    Node* Tail;    // Points to the last node in the list

public:
    // Constructor initializes an empty list
    list() {
        Head = Tail = NULL;
    }

    // Function to insert a new node at the end (tail) of the list
    void push_back(int val) {
        Node* newnode = new Node(val);  // Create a new node

        if (Head == NULL) {
            // If the list is empty, Head and Tail both point to the new node
            Head = Tail = newnode;
            return;
        } else {
            // Link the current Tail to the new node and update Tail
            Tail->next = newnode;
            Tail = newnode;
        }
    }

    // Function to delete the last node (tail) from the list
    void pop_back() {
        if (Head == NULL) {
            // Case 1: List is empty
            cout << "The linked list is empty!!" << endl;
            return;
        }

        if (Head == Tail) {
            // Case 2: Only one node is present
            delete Tail;
            Head = Tail = NULL;
            return;
        }

        // Case 3: More than one node - traverse to the second last node
        Node* temp = Head;
        while (temp->next != Tail) {
            temp = temp->next;
        }

        // Break the link with the last node and update Tail
        temp->next = NULL;
        delete Tail;
        Tail = temp;
    }

    // Function to print the linked list
    void print() {
        Node* temp = Head;

        // Traverse the list and print each node's data
        while (temp != NULL) {
            cout << temp->data << "->";
            temp = temp->next;
        }

        cout << "NULL" << endl; // End of list
    }
};

// Driver code
int main() {
    list ll;

    ll.push_back(21);  // Insert 21 at end
    ll.push_back(23);  // Insert 23 at end

    ll.print();        // Output: 21->23->NULL

    ll.pop_back();     // Remove last node (23)

    ll.print();        // Output: 21->NULL
}
