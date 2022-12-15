#include <iostream>
using namespace std;

int main() {
  int n = 5;
  for(int i=1;i<=n;i++){
    cout << "Hey" << " ";
    continue; // --> skips the commands after this
    cout << "Hi" << " "; //doesnt execute
    cout << "Hi" << " "; //doesnt execute
  }
  return 0;
}