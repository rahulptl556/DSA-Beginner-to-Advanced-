#include <iostream>
using namespace std;
/*
Input = 4;
A 
B C 
C D E 
D E F G

REVERSE
D 
C D 
B C D 
A B C D 
*/
int main() {
  int n;
  cout << "Enter the Value of n" << endl;
  cin >> n;
  char ch = 'A';
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << ch << " ";
      ch++;
    }
    ch = 'A'+i; //reinitialise new line
    /*
    REVERSE OF ABOVE
    char ch = 'D' //initialise with d
    in outer for loop update ch as
    ch = 'D' - i;
    */
    cout << endl;
  }
  return 0;
}