#include <iostream>
using namespace std;

void reverseString(string &s, int i, int j)
{

    // basecase
    if (i > j)
    {
        return;
    }

    swap(s[i], s[j]);
    i++;
    j--;

    //Recursive Call
    reverseString(s, i, j);
}

int main()
{

    string s = "Hello";

    reverseString(s, 0, s.length() - 1);
    cout << s << endl;

    return 0;
}