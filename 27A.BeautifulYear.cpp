/**
 *        Author : NUR E MUDDASSIR TANIM, American International University, Bangladesh
 *        Created:Nov/28/2024 15:16
 **/
#include <bits/stdc++.h>
using namespace std;

bool the_beautyNum(int n){
    int digits4 = n%10;
    n = n/10;
    int digits3 =n %10;
    n = n/10;
    int digits2= n % 10;
    n = n / 10;
    int digits1 = n;
    if ( digits1 != digits2 and digits1 != digits3 and digits1 != digits4 and digits2 != digits3 and digits2 != digits4 and digits3!= digits4){
        return true;
    }
    else
    {
        return false;
    }
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int y;
  cin >> y;
  y++;
  while (true){
    if (the_beautyNum(y)){
        cout << y ;
        return 0;
    }
    y++;
  }
  return 0;
}
