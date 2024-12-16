#include <bits/stdc++.h>
using namespace std;
 
void  evenRecusion(int A[], int i){
    if (i < 0){
        return;
    }
    cout << A[i] << " ";
    evenRecusion(A , i-2);
}
int main() {
 
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  int A[n];
 
  for (int i=0; i<n; i++){
    cin >> A[i];
  }
  int lastEvenI = (n-1) % 2 == 0 ? n-1: n-2;
  evenRecusion(A, lastEvenI);
 
 return 0;
}
