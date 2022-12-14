#include <iostream>
using namespace std;
/* Input = 4;
Same Rows
1
2 2
3 3 3
4 4 4 4

Same Cols
1
1 2
1 2 3
1 2 3 4

Printing X
1 
2 3 
4 5 6 
7 8 9 10 
*/
int main()
{
    int n;
    cout << "Enter the Value of n" << endl;
    cin >> n;
    int x = 1; // initialize
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " "; // if rows are same print i, if cols are same print j

            /*
             print x for countinous number triangle pattern
              cout<< x << " ";
              x++;
              */
        }
        cout << endl;
    }

    return 0;
}