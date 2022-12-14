#include <iostream>
using namespace std;
/*
Input = 4;
* 
* * 
* * * 
* * * *
*/
int main()
{
    int n;
    cout << "Enter the Value of n" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++) //Number of stars is equal to row no
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }

    return 0;
}