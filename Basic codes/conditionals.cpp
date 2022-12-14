#include <iostream>
using namespace std;

int main()
{
    int a = 24;
    if (a > 20)
    {
        cout << "Love"; //1st condn satisfied, directly out to cout<<a;
    }
    else if (a == 24)
    {
        cout << "Lovely";
    }
    else
    {
        cout << "Babbar";
    }
    cout << a;
    return 0;
}