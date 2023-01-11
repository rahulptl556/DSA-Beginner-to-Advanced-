#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    cout << "Enter Binary No" << endl;
    cin >> n;
    int digit;
    int i = 0;
    int ans = 0;

    while(n){
        //mod to get 0 or 1
        digit = n % 10;
        if(digit == 1){
            ans = ans + pow(2,i);
           
        } 
        //divide by 10
        n = n/10;
        i++;
    }
    cout << ans;


  return 0;
}