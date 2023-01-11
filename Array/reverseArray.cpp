#include<iostream>
using namespace std;

void reverseArray(int *arr, int size){
    int s = 0;
    int e = size-1;

    while(s<=e){
        swap(arr[s] , arr[e]);
        s++;
        e--;
    }
}
void printArray(int *arr,int size){
    for(int i=0; i<size; i++){
        cout << arr[i] <<" ";
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};
    reverseArray(arr,5);
    printArray(arr,5);
    
    return 0;
}