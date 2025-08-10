/**
 *        Author: NUR E MUDDASSIR TANIM, American International University-Bangladesh
 *        Created: 11-08-2025
 **/

#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    for(int i = 1000; i > 0; i--)
    {
        if(i == 1000){
            cout << i << " " ;
        }
        else if((i % 5) == 0){
            cout << i << endl;
        }
        else{
            cout << i << " " ;
        }
    }

    return 0;
}
