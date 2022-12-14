#include <iostream>
using namespace std;

/*
Input = 4;
0 0 0 0 
1 1 1 1 
2 2 2 2 
3 3 3 3 
*/

int main()
{
    int n;
    cout << "Enter the Value of n" << endl;
    cin >> n;
    for(int i=0; i<n; i++ ){   //change i according to output required
        for(int j=0; j<n; j++){
            cout <<  i  << " " ;
        }
        cout << endl;
    }
    return 0;
}

