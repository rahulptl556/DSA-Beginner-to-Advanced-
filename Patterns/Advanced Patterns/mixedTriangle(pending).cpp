#include <iostream>
using namespace std;
/*
Input = 4
         1
      2  3
   4  5  6
7  8  9  10
*/
int main() {
  int n;
  cin >> n;
  
  for (int i = 1; i <= 2*n; i++) {
    for (int j = 1; j <= n; j++) {
      if (j <= i) {
        cout << j <<" ";
      } else {
        cout << " * ";
        
      }
    }
    cout << endl;
  }
  return 0;
}