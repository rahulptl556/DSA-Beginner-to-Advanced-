#include <iostream>
using namespace std;
bool isPrime(int n) {
  
  for (int i = 2; i < n; i++) {
    if (n % i != 0) {
      return true;// prime
    } else {
      return false; //not prime
    }
  }
}
int main() {
  int n;
  cin >> n;
  // if true then print
  if (isPrime(n)) {
    cout << "Prime" << endl;
  } else {
    cout << "Not Prime" << endl;
  }
  return 0;
}