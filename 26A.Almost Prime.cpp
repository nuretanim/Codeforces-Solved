/**
 *        Author : NUR E MUDDASSIR TANIM, American International University, Bangladesh
 *        Created:Nov/28/2024 14:55
 **/
#include <bits/stdc++.h>
using namespace std;

bool is_prime (int n){
    int divisors =0;
    for(int i =1; i<=n ;i++)
        if (n%i == 0){
            divisors++;

        }
        if (divisors==2){
            return true;
        }else{
            return false;
        }
}
bool is_almost_prime(int n){
    int primeDivisors =0;
    for (int i =1;i<=n; i ++){
        if ( n % i==0){
            if (is_prime(i)){
                primeDivisors++;
            }
        }
    }
    if (primeDivisors ==2){
        return true;

    }else{
        return false;
    }
}


int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  int ans=0;
  cin >> n;
  for (int i=1; i<=n ; i++){
    if (is_almost_prime(i)){
        ans++;
    }
    
  }
  cout << ans;
  return 0;
}
