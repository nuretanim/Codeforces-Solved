/**
 *        Author: NUR E MUDDASSIR TANIM, American International University-Bangladesh
 *        Created: 27 - 04 - 2025
 **/

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome( int A[], int s, int e){
 
    if (s >= e){
     return 1;
    }
    if (A[s] != A[e]) 
      return 0;
    return isPalindrome(A ,s + 1,e -1 );
   
}
 
int main() {
 
  ios_base::sync_with_stdio(0);
  cin.tie(0);
 
  int n ;
  cin >> n;
  int A[n];
  for (int i = 0; i < n; i++)
  {
    cin >> A[i];
  }
  if (isPalindrome(A,0,n-1)){
 
    cout << "YES" ;
 
  }else{
    cout << "NO";
  }
}
