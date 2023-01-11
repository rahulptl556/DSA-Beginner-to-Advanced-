#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n,y;
    while(t--){
        cin >> n >> y;
        int r = 0;

        for(int i=0; i<n; i++){
          int a;
          cin >> a;
          r |= a;
        }
        
        int x= y- r;
        if((x&y) == x){
          cout << x << endl;
        }
        else{
          cout << "-1" << endl;
        }
    }
	return 0;
}
