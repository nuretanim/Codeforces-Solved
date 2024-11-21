/**
 *        Author : NUR E MUDDASSIR TANIM, American International University, Bangladesh
 *        Created:Nov/21/2024 16:27
 **/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

 
int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    
    ll t,m,n,sum,b;
    cin >> t;
    while (t--)
    {
        cin >>n ;
        sum = n * (n +1)/2;
        b = 1;
    
    while(b<=n)
    {
        sum-=b*2;
        b = b*2;

    }
    cout << sum << endl;
}

     
    return 0;
}
