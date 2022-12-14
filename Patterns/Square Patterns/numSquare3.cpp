#include <iostream>
using namespace std;
/*
Input = 4;
4 3 2 1 
4 3 2 1 
4 3 2 1 
4 3 2 1 
*/
int main()
{
    int n;
    cout << "Enter the Value of n" << endl;
    cin >> n;
    for (int i=4; i>0; i--){
        for(int j=4; j>0; j--){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}