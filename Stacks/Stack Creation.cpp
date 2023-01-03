#include <iostream>
#include <stack>
using namespace std;

int main(){
    //creation of stack
    stack <int> s;

    //push operation
    s.push(2);
    s.push(5);
    s.push(7);

    //pop operation
    s.pop();

    //peak element
    s.top();

    if(s.empty()){
        cout << "Stack is empty" << endl;
    }
    else{
        cout << "Stack is not empty" << endl;
    }
    cout << "Element on top -->" << s.top() << endl;

    cout << "Size of Stack is --> " << s.size() << endl;

    return 0;
}