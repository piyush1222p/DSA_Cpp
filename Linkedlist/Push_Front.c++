#include <iostream>
using namespace std;

// Node class to represent each element in the linked list
class Node {
public:
    int data;      // To store the value of the node
    Node* next;    // Pointer to the next node in the list

    // Parameterized constructor to initialize node with value
    Node(int val) {
        data = val;      // Assign the value to data
        next = NULL;     // Set next pointer to NULL initially
    }
};

// Linked List class to manage the list
class List {
    Node* head;    // Pointer to the first node (beginning of list)
    Node* tail;    // Pointer to the last node (end of list)

public:
    // Default constructor to initialize an empty list
    List() {
        head = tail = NULL;  // Initially, both head and tail are NULL
    }

    // Function to insert a new node at the end of the list
    void push_front(int val) {
        Node* newnode = new Node(val);  // Step 1: Create new node in heap with given value

        if (head == NULL) {  // Step 2: If list is empty (first insertion)
            head = tail = newnode;  // Head and tail both point to the first node
            return;  // Exit the function after first insertion
        }

        else {
            newnode->next = head;  // Makes new node point to current head (insertion at front)
            head = newnode;        // Head is now updated to the new node
        }
    }

    void print_LL(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main() {
    List ll;  // Create an empty linked list object

    ll.push_front(1);//insert 1 in linkedlist ll
    ll.push_front(2);//insert 2 in linkedlist ll
    ll.push_front(3);//insert 3 in linkedlist ll

    ll.print_LL(); //print all the elements of the linkedlist ll

    return EXIT_SUCCESS;
}
