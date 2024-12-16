#include <bits/stdc++.h>
using namespace std;
 
// using ll = long long;
// const int N = 1e5 + 9;
 
int fib(int n){
    if (n == 1 )
        return 0;
    if (n == 2){
        return 1;
    }else{
        return fib(n-1) + fib(n-2);
    }
    
}
int main() {
 
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  cout <<fib(n); 
 
 return 0;
}
