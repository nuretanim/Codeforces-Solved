/**
 *        Author : NUR E MUDDASSIR TANIM, American International University, Bangladesh
 *        Created: Nov/12/2024 17:48
 **/
#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string a, b;
    cin >> a >> b;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    
    if (a < b) {
        cout << "-1";
    } else if (a > b) {
        cout << "1" ;
    } else {
        cout << "0" ;
    }

    return 0;
}
