#include <iostream>
using namespace std;
/*
Input = 3;
1 2 3 
4 5 6 
7 8 9
*/
int main()
{
    int n;
    cout << "Enter the Value of n" << endl;
    cin >> n;
    int x = 1; // Creating x to keep the value running
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << x << " ";
            x = x + 1;
        }
        cout << endl;
    }

    return 0;
}