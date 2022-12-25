#include <iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    //Constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
   
    // Destructor
    ~Node(){
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            next = NULL;
        }
        cout << "Memory Free for data " << value << endl;

    }
};

void insertNode(Node* &tail, int element, int d){

    //empty list

    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    else{
      
        //non empty list
        // Assuming the Element is present in the list

    Node* curr = tail;
    
    while(curr -> data != element){
        curr = curr -> next;
    }

    //Element found at the curr node
    Node* temp = new Node(d);
    temp -> next = curr -> next;
    curr -> next = temp;

    }

}
void print(Node* tail) {

    Node* temp = tail;

    //empty list
    if(tail == NULL) {
        cout << "List is Empty "<< endl;
        return ;
    }

    do {
        cout << tail -> data << " ";
        tail = tail -> next;
    } while(tail != temp);

    cout << endl;
} 

//Deletion

void deleteNode(Node* &tail, int value) {

    //empty list
    if(tail == NULL) {
        cout << " List is empty, please check again" << endl;
        return;
    }
    else{
        //non-empty

        //assuming that "value" is present in the Linked List
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value) {
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        //1 Node Linked List
        if(curr == prev) {
            tail = NULL;
        }

        //>=2 Node linked list
        else if(tail == curr ) {
            tail = prev;
        }

        curr -> next = NULL;
        delete curr;

    }

}


int main(){

    Node* tail = NULL;
    //insert at empty list

    insertNode(tail, 5, 3);
    print(tail);

    insertNode(tail, 3, 5);
    print(tail);

    insertNode(tail, 3, 10);
    print(tail);
   
    insertNode(tail, 5, 6);
    print(tail);
   
    insertNode(tail, 10, 11);
    print(tail);

    deleteNode(tail,10);
    print(tail);

    deleteNode(tail,6);
    print(tail);
    
    deleteNode(tail,3);
    print(tail);


    return 0;
}