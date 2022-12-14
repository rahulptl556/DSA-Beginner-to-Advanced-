#include <iostream>
using namespace std;

bool isPresent(int arr[], int size, int target)
{
    // basecase
    if (size == 0)
    {
        return false;
    }
    if (arr[0] == target)
    {
        return true;
    }
    else
    {
        int remainingpart = isPresent(arr + 1, size - 1, target);
        return remainingpart;
    }
}

int main()
{
    int arr[5] = {1, 4, 5, 12, 25};
    int target;
    cout << " Enter Target " << endl;
    cin >> target;

    int ans = isPresent(arr, 5, target);
    if (ans)
    {
        cout << "Element is Present" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    return 0;
}
