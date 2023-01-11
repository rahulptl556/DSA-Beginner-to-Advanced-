#include<iostream>
using namespace std;

void swapAlternate(int *arr, int size){
   for(int i=0; i<size; i += 2){
       if(i+1 < size){
         swap(arr[i],arr[i+1]);
       }    
   }
}