#include <iostream>
using namespace std;
int partition(int arr[], int s, int e)
{

    // finding count
    int pivot = arr[s];
    int cnt = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] < arr[s])
        {
            cnt++;
        }
    }
    // placing pivot at the right place
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    // making left and right side correct
    int i = s;
    int j = e;
    while(i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] < arr[pivotIndex])
        {
            i++;
        }
        while (arr[j] > arr[pivotIndex])
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i], arr[j]);
        }
        return pivotIndex;
    }
}
void quickSort(int arr[], int s, int e)
{

    // base case
    if (s >= e)
        return;

    // shift pivot to right place
    int p = partition(arr, s, e);

    // recursion call
    quickSort(arr, s, p - 1); // left
    quickSort(arr, p + 1, e); // right
}

int main()
{
    int arr[5] = {3, 1, 4, 5, 2};
    int n = 5;
    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}