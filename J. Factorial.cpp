#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
ll factorial(int n){
    if (n == 1)
        return 1;
    else{
        return n * factorial(n-1);
    }
}
int main() {
 
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  cout <<factorial(n); 
 
 return 0;
}
