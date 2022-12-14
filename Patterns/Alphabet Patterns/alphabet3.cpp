#include <iostream>
using namespace std;
/*
Input = 3;
A B C 
A B C 
A B C 
*/
int main() {
  int n;
  cout << "Enter the Value of n" << endl;
  cin >> n;
  char ch = 'A';
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << ch << " ";
      ch++;
    }
    cout << endl;
    ch = 'A'; //in the next row reinitialise ch with 'A'
  }
  return 0;
}