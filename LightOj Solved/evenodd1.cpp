/**
 *        Author: NUR E MUDDASSIR TANIM, American International University-Bangladesh
 *        Created: 10-08-2025
 **/

#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        if(n%2 == 0)
        {
            cout << "even";
        }
        else{
            cout << "odd";
        }
        cout << endl;
    }

    return 0;
}
