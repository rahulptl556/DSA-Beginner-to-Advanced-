#include <iostream>
using namespace std;

int reachHome(int start, int dest)
{
    cout << " start --> " << start << " destination --> " << dest << endl;
    // base case
    if (start == dest)
    {
        cout << " Reached " << endl;
        return 1;
    }
    // processing
    start++;
    // recurssive call
    reachHome(start, dest);
}

int main()
{
    int start = 1;
    int dest = 10;

    reachHome(start, dest);

    return 0;
}