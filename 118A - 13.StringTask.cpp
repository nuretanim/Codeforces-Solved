/**
 *        Author:  NUR E MUDDASSIR TANIM, American International University, Bangladesh
 *        Created:2024-11-07 10:37:08
 **/
#include <bits/stdc++.h>

using namespace std;
#define endl '\n'

int32_t main() {
 
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  ll n;
    string s,t;
    cin>>s;
    n = s.length();
    transform(s.begin(),s.end(),s.begin(), ::tolower);

    for(ll i=0; i<n; i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
            continue;
        else{
            t += '.';
            t += s[i];
        }
    }
    cout<<t<<endl;

        
      
  return 0;

}
