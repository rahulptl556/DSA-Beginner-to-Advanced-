#include<iostream>
using namespace std;

bool isPresent(int *arr, int size, int key){
    for(int i=0; i<size; i++){
        
        if(arr[i] == key){
            return true;
        }
    }
    return 0;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    

    if(isPresent(arr,5,3)){
        cout << "Element is Present";
    }
    else{
        cout << "Element NOT Present";
    }
    
    return 0;
}