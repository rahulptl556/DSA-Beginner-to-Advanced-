#include <iostream>
using namespace std;

int main()
{
    // Print 1 to n
    int n;
    cin >> n;
    int num = 1;
    while (num <= n)
    {
        cout << num << " ";
        num++; // incrementing num till n
    }
    cout << endl << endl;

    
    // Sum 1 to n
    int sum = 0;
    int num2 = 1;
    while (num2 <= n)
    {
        sum += num2; // or sum = sum + num;
        num2++;
    }
    cout << "Sum is --> " << sum << endl;
    cout << endl << endl;
    
    
    // Sum of even no. from 1 to n
    int sum2 = 0;
    int num3 = 2;
    while (num3 <= n)
    {
        sum2 += num3;
        num3 = num3 + 2;
    }
    cout << "Sum of Even Numbers is --> " << sum2 << endl;
    return 0;
}