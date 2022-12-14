#include <iostream>
using namespace std;
/*
Input = 4;
A 
B B 
C C C 
D D D D 

RESULT 2
A 
B C 
D E F 
G H I J 
*/
int main() {
  int n;
  cout << "Enter the Value of n" << endl;
  cin >> n;
  char ch = 'A';
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << ch << " ";
    }
    ch++; //move this into above for loop for result 2
    cout << endl;
  }
  return 0;
}