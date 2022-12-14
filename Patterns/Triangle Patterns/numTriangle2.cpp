#include <iostream>
using namespace std;
/*
Input = 4;
1
2 3
3 4 5
4 5 6 7
*/
int main() {
  int n;
  cout << "Enter the Value of n" << endl;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    int x = i;
    for (int j = 1; j <= i; j++) {
      cout << x << " ";
      x++;
    }
    cout << endl;
  }

  return 0;
}