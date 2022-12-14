#include <iostream>
using namespace std;
/*
Input = 3;
A A A
B B B
C C C
*/
int main() {
  int n;
  cout << "Enter the Value of n" << endl;
  cin >> n;
  char ch = 'A';
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << ch << " ";
    }
    ch++;
    cout << endl;
  }
  return 0;
}