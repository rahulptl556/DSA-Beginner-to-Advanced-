#include <iostream>
using namespace std;

bool isSorted(int arr[], int size)
{

    if (size == 0 || size == 1)
        return true;
    if (arr[0] > arr[1])
        return false;
    else
    {
        int ans = isSorted(arr + 1, size - 1);

    }
}

int main()
{

    int arr[5] = {1, 3, 5, 6, 7};

    bool ans = isSorted(arr, 5);
    
    if(ans){
    cout << " Array is sorted " << endl;
    }

    else{
    cout << " Array is not sorted " << endl;
    }
    return 0;
}