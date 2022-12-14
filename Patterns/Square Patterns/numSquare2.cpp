#include <iostream>
using namespace std;
/*
Input = 4;
1 2 3 4 
1 2 3 4 
1 2 3 4 
1 2 3 4 
*/
int main()
{
    int n;
    cout << "Enter the Value of n" << endl;
    cin >> n;
    for (int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}