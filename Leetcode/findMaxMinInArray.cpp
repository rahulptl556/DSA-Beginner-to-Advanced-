#include<iostream>
#include<limits.h>
using namespace std;

//Printing Array
void printArray(int *arr,int size){
    for(int i=0; i<size; i++){
        cout << arr[i] <<" ";
    }
}
int getMax(int *arr, int size){
    int max = INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int getMin(int *arr, int size){

    int min = INT_MAX;
    for(int i=0; i<size; i++){
        if(arr[i] < min){
           min = arr[i];
        }
    }
    return min;
}

int main(){

    int arr[5] = {2,5,12,23,1};
    printArray(arr,5); 
    cout << endl;
    cout << "Max element is -> " << getMax(arr,5) << endl;
    cout << "Min element is -> " <<getMin(arr,5) << endl;




    return 0;
}