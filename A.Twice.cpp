/**
 *        Author : NUR E MUDDASSIR TANIM, American International University, Bangladesh
 *        Created:Nov/17/2024 18:09
 **/
//https://codeforces.com/contest/2037/problem/A
#include <bits/stdc++.h>
using namespace std;

vector<int> maxScore(vector<pair<int, vector<int>>> &tC) {
    vector<int> results;
    for (auto &tC : tC) {
        int n = tC.first;
        vector<int> a = tC.second;

        unordered_map<int, int> freq;
        for (int num : a) {
            freq[num]++;
        }

        int score = 0;
        for (auto &entry : freq) {
            score += entry.second / 2;
        }

        results.push_back(score);
    }
    return results;
}
int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t; 

    vector<pair<int, vector<int>>> tC;

    for (int i = 0; i < t; ++i) 
    {

        int n;
        cin >> n; 
        vector<int> a(n);

        for (int j = 0; j < n; ++j) {
            cin >> a[j]; 
        }

        tC.emplace_back(n, a);
    }

    vector<int> results = maxScore(tC);

    for (int res : results)
    {
        cout << res << endl; 
    }

    return 0;
}
