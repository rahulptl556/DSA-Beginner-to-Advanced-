#include <iostream>
using namespace std;
/*
Input = 3;
9 8 7 
6 5 4 
3 2 1 
*/
int main()
{
    int n;
    cout << "Enter the Value of n" << endl;
    cin >> n;
    int x = n * n; // initialising with n square
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << x << " ";
            x = x - 1; //decreasing order
        }
        cout << endl;
    }

    return 0;
}