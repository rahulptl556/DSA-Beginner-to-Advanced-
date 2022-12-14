#include <iostream>
using namespace std;
/*
Input = 4;
A B C D 
B C D E 
C D E F 
D E F G 
*/
int main() {
  int n;
  cout << "Enter the Value of n" << endl;
  cin >> n;
  char ch = 'A';
  for (int i = 1; i <= n; i++) { //initialise i with 1
    for (int j = 0; j < n; j++) {
      cout << ch << " ";
      ch++;
    }
    cout << endl;
    ch = 'A' + i; //reinitialise next row with equation
  }
  return 0;
}