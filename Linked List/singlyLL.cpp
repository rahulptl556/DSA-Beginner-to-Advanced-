#include <iostream>
using namespace std;
// Creating a Linked List
class Node
{
public:
    int data;   // Data in LL
    Node *next; // Pointer to Next LL

    // Constructor
    Node(int data)
    {
        this->data = data; // Setting Data of LL Node
        this->next = NULL; // Setting Address of next LL Node
    }
};
// Creating a Function to insert New Node at Head
void insertAtHead(Node *&head, int d)
{

    // create a new node
    Node *temp = new Node(d);
    temp->next = head; // temp is new head
    head = temp;
}

// Creating a Function to insert New Node at Tail
void insertAtTail(Node *&tail, int d)
{

    // create a new node
    Node *temp = new Node(d);
    tail->next = temp;
    temp = tail;
}

// Printing a Linked List by traversing
void print(Node *&head)
{
    Node *temp = head; // Creating temp as we used &head
    while (temp != NULL)
    {
        cout << temp->data << " "; // printing node data
        temp = temp->next;         // moving to next node
    }
    cout << endl;
}


int main()
{
    Node *node1 = new Node(10);

    Node *head = node1;
    Node *tail = node1;
    print(head);

    insertAtTail(tail, 12);
    print(head);

    insertAtTail(tail, 15);
    print(head);

    return 0;
}
