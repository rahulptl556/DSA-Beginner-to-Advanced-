#include <iostream>
using namespace std;
/*
Input = 4
 *  *  *  * 
 *  *  *  * 
 *  *  *  * 
 *  *  *  * 
 */
int main()
{
    int n;
    cout << "Enter the Value of n" << endl;
    cin >> n;
    for(int i=0; i<n; i++ ){
        for(int j=0; j<n; j++){
            cout << " * " ;
        }
        cout << endl;
    }
    return 0;
}