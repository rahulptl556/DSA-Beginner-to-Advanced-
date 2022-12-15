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
  int x = 1;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (j <= n - i) {
        cout << "   ";
      } else {
        cout << x << "  ";
        x++;
      }
    }
    cout << endl;
  }
  return 0;
}