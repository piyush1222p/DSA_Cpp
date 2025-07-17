#include <iostream>
using namespace std;

// Node class for singly linked list
class Node {
public:
    int data;        // Stores the data
    Node* next;      // Pointer to next node

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// List class that manages head and tail
class list {
private:
    Node* Head;      // Points to the first node
    Node* Tail;      // Points to the last node

public:
    // Constructor to initialize an empty list
    list() {
        Head = Tail = NULL;
    }

    // Inserts a new node at the beginning (head) of the list
    void push_front(int val) {
        Node* newnode = new Node(val);  // Create new node

        if (Head == NULL) {
            // List is empty — new node becomes head and tail
            Head = Tail = newnode;
        } else {
            // Point new node to current head and update head
            newnode->next = Head;
            Head = newnode;
        }
    }

    // Removes the node from the beginning (head) of the list
    void pop_front() {
        if (Head == NULL) {
            // Empty list — nothing to pop
            cout << "The linked list is empty!!" << endl;
            return;
        }

        Node* temp = Head;        // Store current head in temp
        Head = Head->next;        // Move head to next node
        temp->next = NULL;        // Detach temp node from the list
        delete temp;              // Free memory

        // If list becomes empty, update tail too
        if (Head == NULL) {
            Tail = NULL;
        }
    }

    // Prints all elements in the linked list
    void print() {
        Node* temp = Head;

        while (temp != NULL) {
            cout << temp->data << "->";
            temp = temp->next;
        }

        cout << "NUll" << endl;
    }
};

// Driver code to test the list
int main() {
    list ll;

    // Inserting elements at front
    ll.push_front(21);
    ll.push_front(23);

    // List: 23->21->NUll
    ll.print();

    // Remove first element (23)
    ll.pop_front();

    // List: 21->NUll
    ll.print();

    return 0;
}
