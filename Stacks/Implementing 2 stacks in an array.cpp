#include <iostream>
using namespace std;

class Stack{
//properties


public:

int size;
int top1;
int top2;
int *arr;

//constructor

Stack(int s){
    this -> size = s;
    top1 = -1;
    top2 = s;
    arr = new int[s];
}

void push1(int element){
//space availablity
if(top2 - top1 > 1){
    top1++;
    arr[top1] = element;
}
else{
    cout << "Stack Overflow" << endl;
}
}

void push2(int element){
    //space availbility
    if(top2 - top1 > 1 ){
        top2--;
        arr[top2] = element;
    }
    else{
    cout << "Stack Overflow" << endl;
    }
}

int pop1(){
    //if empty
    if(top1 >= 0){
        int ans = arr[top1];
        top1--;
        return ans;
    }
    else{
        cout << "Stack is Empty" << endl;
      return -1;
    }
}

int pop2(){
    //if empty
    if(top2 >= 0){
        int ans = arr[top2];
        top2++;
        return ans;
    }
    else{
        cout << "Stack is Empty" << endl;
      return -1;
    }
  }
};

int main(){

    Stack s(5);
    s.push1(5);
    s.push2(6);
    s.push1(5);
    s.push2(6);
    s.push1(5);

    // s.pop1();
    // s.pop2();
    // s.pop1();
    // s.pop2();
    // s.pop1();

    // s.pop1();


    return 0;
}