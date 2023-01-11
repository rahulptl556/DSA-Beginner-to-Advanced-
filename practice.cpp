#include <iostream>
#include <math.h>
#include<limits.h>
using namespace std;

int main() {
  int n,bit,ans;
  int i = 0;
  cin >> n;

    while(n){
        bit = 1 & n;
        ans = (bit * pow(10,i) + ans);
        n = n >> 1;
    }

  return ans;
}