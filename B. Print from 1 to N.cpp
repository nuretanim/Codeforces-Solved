#include <bits/stdc++.h>
using namespace std;
 
void recursion(int n){
    if (n <=0){
        return;
    }
    recursion(n-1);
    cout << n << endl;
 
}
 
int32_t main() {
 
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  recursion(n);
 
 return 0;
}
