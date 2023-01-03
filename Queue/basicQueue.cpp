#include <iostream>
#include <queue>
using namespace std;
int main(){
    
    //creating a queue
    queue<int> q;
    q.push(11);
    q.push(15);
    q.push(13);

    cout << "Size of queue is ->> " << q.size() << endl;

    q.pop();
    cout << "Size of queue is ->> " << q.size() << endl;
    //checking empty
    if(q.empty()){
        cout <<"It is empty" << endl;
    }
    else{
        cout <<"It is NOT empty" << endl;
    }

    cout << "Front of queue is -> " << q.front() << endl;
    cout << "End element of queue is -> " << q.back() << endl;



    return 0;
}