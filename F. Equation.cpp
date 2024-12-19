//https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/F

#include <bits/stdc++.h>
using namespace std;
 
long long getPower(int a ,int n){
    long long power = 1;
    for (int i = 1; i <= n; i++)
    {
        power *= a;
    }
    return power;
}

long long solve(int x, int n){
    long long sum = 0;
    for (int i = 0; i <= n; i+=2)
    {
        sum += getPower(x,i);
    }
    sum-=1;
    return sum;
}


 
int32_t main() {
 
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int x,n;
  cin >> x >> n;
  cout << solve(x,n);
 
 return 0;
}
