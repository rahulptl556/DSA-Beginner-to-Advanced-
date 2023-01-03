#include <iostream>
using namespace std;

class Stack{
public:
//properties
int size;
int *arr;
int top;

//behaviour -> constructor
Stack(int size){
    this -> size = size;  // setting size;
    arr = new int[size];  //creating array on the basis of size
    top = -1;             // initialising top 
}

void push(int element){
    //is space available
    if((size - top) > 1){
        top ++;
        arr[top] = element;
    }
    else{
        cout <<"Stack Overflow" << endl;
    }
}

void pop(){
    //is stack empty
    if(top >= 0){
        top--;
    }
    else{
        cout << "Stack Underflow" << endl;
    }
}

int peak(){
    //is not empty check
    if(top >= 0){
        return arr[top]; //top is index, so arr[top]
    }
    else{
        cout << "Stack is empty" << endl;
        return -1;
    }
}

bool empty(){
    if (top == -1){
        return true;
    }
    else{
        return false;
    }
}

};

int main(){

// creating a stack
    Stack s(5);
    
    s.push(22);
    s.push(43);
    s.push(15);

    cout << s.peak() << endl;
    s.pop();
    // cout << s.peak() << endl;
    // s.pop();
    // cout << s.peak() << endl;
    // s.pop();
    // cout << s.peak() << endl;
  
  if(s.empty()){
    cout << "Stack is Empty" << endl;
  }
  else{
    cout << "Stack is Not Empty" << endl; 
  }


    return 0;
}