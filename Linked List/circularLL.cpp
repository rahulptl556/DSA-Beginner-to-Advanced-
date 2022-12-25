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



    return 0;
}