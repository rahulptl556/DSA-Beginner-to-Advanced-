#include <iostream>
using namespace std;

int main()
{
    char a;
    cout << "Enter the Element" << endl;
    cin >> a;
    if(a>='A' && a<='Z'){
        cout << "Uppercase" << endl;
    }
    else if(a>='a' && a<='z'){
        cout << "Lowercase" << endl;
    }
    else if(a>='0' && a<='9'){
        cout << "Digit" << endl;
    }
    return 0;
}