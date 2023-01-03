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


bool isCircular(Node*head){
    //empty list
    if(head == NULL){
        return true;
    }
    //single node
    if (head -> next == NULL ){
        return false;
    }
    if (head -> next == head){
        return true;
    }
    //multiple
    Node* temp = head -> next;

    while(temp != NULL && temp != head){
        temp = temp -> next;
    }
    if (temp == NULL){
        return false;
    }
    if(temp == head){
        return true;
    }

}

Node* flyodDetectLoop(Node* head){
Node* slow = head;
Node* fast = head;

//empty 
if (head == NULL){
    return NULL;
}

while(fast != NULL && slow != NULL){
    
    fast = fast -> next;
    //check if fast ka next is null, then only move twice on fast
    if(fast != NULL){
        fast = fast -> next;
    }
    slow = slow -> next;
    
    if(slow == fast){
        cout << "Present at " << slow -> data << endl;
        return slow;
    }
    
}

return NULL;

}

//Detecting Starting Node in a Loop using Floyd's Algo

Node* getStartingNode(Node* head){

    if(head == NULL){
        return NULL;
    }

    Node* intersection = flyodDetectLoop(head);
    Node* slow = head;

    while(slow != intersection){
        slow = slow -> next;
        intersection = intersection -> next;
    }
    return slow;
    
}

void removeLoop(Node* head){
    if(head == NULL){
        return;
    }

    Node* startNode = getStartingNode(head);
    Node* temp = startNode;

    while(temp -> next != startNode){
        temp = temp -> next;
    }
    temp -> next = NULL;
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
   
     
    if(flyodDetectLoop){
        cout << "Loop is Present" << endl;
    }
    else{
        cout << "Loop is not Present" << endl;
    }


    return 0;
}