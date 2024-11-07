/**
 *        Author:  NUR E MUDDASSIR TANIM, American International University, Bangladesh
 *        Created: Nov/07/2024 13:13
 **/
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
using ll = long long;
//const int N = 1e5 + 9;

void solve () 
{
    double n,m,a;
    
    cin >> n >> m >> a;

  
    ll result = ceil(m/a)*ceil(n/a);

    cout << result << endl;

}

int32_t main() {
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // int t=1;
    // // cin >>t;
    // while(t--)

    solve();

  return 0;

}


