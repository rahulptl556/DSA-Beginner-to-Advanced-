#include <iostream>
using namespace std;

bool checkPalindrome(string &s, int i, int j)
{

    if (i > j)
        return 1;
    if (s[i] != s[j])
        return 0;

    // i++;
    // j--;
    return checkPalindrome(s, i + 1, j - 1);
}

int main()
{
    string s = "abcba";

    bool isPalindrome = checkPalindrome(s, 0, s.length() - 1);

    if (isPalindrome)
    {
        cout << "Plaindrome" << endl;
    }
    else
    {
        cout << "Not Plaindrome" << endl;
    }
    return 0;
}