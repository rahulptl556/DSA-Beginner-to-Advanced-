#include <iostream>
using namespace std;

int sumArray(int *arr, int size)
{
    int sum = 0;

    // Basecase
    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }

    else
    {
        int remainingpart = sumArray(arr + 1, size - 1);
        sum = arr[0] + remainingpart;
        return sum;
    }
}

int main()
{

    int arr[5] = {1, 3, 5, 6, 7};

    int ans = sumArray(arr, 5);
    cout << " Sum is --->" << ans << endl;

    return 0;
}