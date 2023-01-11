#include <iostream>
#include <algorithm>

using namespace std;

int uniqueElement(int *arr, int size, int key){
    sort(arr,arr+size);
    for(int i=0; i<size; i+=key){
        if(arr[i] != arr[i+key-1]){
            return arr[i];
        }
    }

}

int main(){

    int arr[7] = {1,2,8,2,1,7,7};
    cout << uniqueElement(arr,7,2) << endl;;

    return 0;
}