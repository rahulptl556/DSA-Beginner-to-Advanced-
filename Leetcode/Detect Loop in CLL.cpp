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

Node* detectStartingNode(Node* head){

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

int main(){
    Node* tail = NULL;
    //insert at empty list

    insertNode(tail, 5, 3);
    insertNode(tail, 3, 5);
    insertNode(tail, 3, 10);
     
    if(flyodDetectLoop){
        cout << "Loop is Present" << endl;
    }
    else{
        cout << "Loop is not Present" << endl;
    }


    return 0;
}