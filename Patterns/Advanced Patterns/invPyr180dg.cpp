#include <iostream>
using namespace std;
/*
Input = 5
             *
          *  *
       *  *  *
    *  *  *  *
 *  *  *  *  *
*/
int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (j <= n - i) {
        cout << "   "; //printing space n-i times
      } else {
        cout << " * "; //printing stars i times
      }
    }
    cout << endl;
  }
  return 0;
}