#include <iostream>
using namespace std;

bool isPresent(int arr[], int s, int e, int k)
{

    if (s > e)
    {
        return false;
    }
    int m = s + (e - s) / 2;
    if (arr[m] == k)
    {
        return true;
    }
    if (arr[m] > k)
    {
        return isPresent(arr, s, m - 1, k);
    }
    if (arr[m] < k)
    {
        return isPresent(arr, m + 1, e, k);
    }
}

int main()
{

    int arr[5] = {2, 5, 11, 13, 16};
    int k;
    cout << "Enter the value of k" << endl;
    cin >> k;

    int ans = isPresent(arr, 0, 5, k);

    if (ans)
    {
        cout << "Element Found" << endl;
    }
    else
    {
        cout << "Element Not found" << endl;
    }

    return 0;
}