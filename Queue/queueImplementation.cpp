#include <iostream>
using namespace std;

class queue
{
public:
    int *arr;
    int size;
    int qfront;
    int rear;

    // contructor
    queue()
    {
        size = 100001; // setting size manually
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    // isEmpty
    bool isEmpty()
    {
        if (qfront == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // push
    void push(int element)
    {
        // space available?
        if (rear == size)
        {
            cout << "Queue is full" << endl;
        }
        else
        {
            arr[rear] = element;
            rear++;
        }
    }

    // pop
    int pop()
    {
        // EMPTY?
        if (qfront == rear)
        {
            return -1;
        }
        else
        {
            int ans = arr[qfront];
            arr[qfront] = -1; // clear the value in front
            qfront++;
            // if queue gets empty
            if (qfront == rear)
            {
                qfront = 0;
                rear = 0;
            }
            return ans;
        }
    }

    // Front
    int front()
    {
        // check empty
        if (qfront == rear)
        {
            return -1;
        }
        else
        {
            return arr[qfront];
        }
    }
};

int main()
{
    queue q;

    q.push(11);
    q.push(15);
    q.push(13);

    q.pop();
    q.isEmpty();
    q.front();


    return 0;
}