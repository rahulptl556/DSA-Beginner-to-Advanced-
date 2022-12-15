#include <iostream>
using namespace std;
/*
Input = 5
1  1  1  1  1  
   2  2  2  2  
      3  3  3  
         4  4  
            5  
*/
int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (j <= i - 1) {
        cout << "   ";
      } else {
        cout << i <<"  ";
      }
    }
    cout << endl;
  }
  return 0;
}