#include <iostream>
using namespace std;
/*
Input = 5
 *  *  *  *  *
    *  *  *  *
       *  *  *
          *  *
             *
*/
int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (j <= i - 1) {
        cout << "   ";
      } else {
        cout << " * ";
      }
    }
    cout << endl;
  }
  return 0;
}