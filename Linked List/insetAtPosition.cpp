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
};

void insertAtPosition(Node *head, int pos, int d,Node* tail){

    if(pos == 1){
        Node* temp = new Node(d);
        temp -> next = head;
        temp = head;
    }

    Node* temp = head;
    int cnt = 0;
    while(cnt<pos){
        temp = temp -> next;
        cnt++;
    }
    
    Node* newNode = new Node(d);
    newNode -> next = temp -> next;
    temp -> next = newNode;

    if(temp -> next = NULL){
        Node* temp = new Node(d);
        tail -> next = temp;
        temp = tail;
    }
}
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}
int main(){

    Node* node1 = new Node(10);
    print(node1);

    insertAtPosition(node1,2,12,node1);
    print(node1);



    return 0;
}