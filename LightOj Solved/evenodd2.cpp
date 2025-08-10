/**
 *        Author: NUR E MUDDASSIR TANIM, American International University-Bangladesh
 *        Created: 10-08-2025 
 **/

#include <bits/stdc++.h>
using namespace std;

bool evenNumber(string num)
{
    char lastDigitChar = num.back();
    int lastDigit = lastDigitChar - '0';
    return (lastDigit %  2 == 0);
} 

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int test;
    cin >> test;
    while(test--){
        string num;
        cin >> num;
        cout << (evenNumber(num) ? "even" : "odd") << '\n';
    }
    return 0;
}
