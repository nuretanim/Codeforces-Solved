/**
 *        Author:  NUR E MUDDASSIR TANIM, American International University, Bangladesh
 *        Created: 2024-07-07 19:03:21
 **/


#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
using ll = long long;
const int N = 1e5 + 9;

int main() {
  int n,i,sum,count=0;
    int p[3];
    cin>>n;
    while(n--)
    {
        sum=0;
        for(i=0;i<3;i++)
        {
            cin>>p[i];
            sum+=p[i];
        }
        if(sum>=2) count++;
    }
    cout<<count;

  return 0;

}
