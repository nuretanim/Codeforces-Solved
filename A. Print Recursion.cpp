/**
 *        Author : NUR E MUDDASSIR TANIM, American International University, Bangladesh
 *        Created:Nov/24/2024 
 **/
#include <bits/stdc++.h>
using namespace std;
 
void recursiveFunction (int n) {
    
  if (n<=0){
    return ;
  }
    cout << "I love Recursion" << endl;
    recursiveFunction(n-1);
    
}
 
int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  recursiveFunction(n);
  
 
 
  return 0;
}
