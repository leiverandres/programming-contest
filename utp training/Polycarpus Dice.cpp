#include <bits/stdc++.h>
//http://codeforces.com/problemset/problem/534/C
using namespace std;

int main () {
  int n;
  long long sum = 0, A;
  cin>>n>>A;
  int arr[n];
  for (int i = 0; i < n; ++i){
    cin>>arr[i];
    sum += arr[i];
  }
  long long ans = 0;
  for (int i = 0; i < n; ++i) {
    int left = max(1LL , A - (sum - arr[i]));
    int right = min(0LL + arr[i], A - (n-1));
    ans = arr[i] - (right - left  + 1);
    cout<<ans<<" ";
  }
  cout<<endl;
  return 0;
}
/*
n : numero de dados
A : la suma de los dados
luego n datos indicando el numero de caras de cada dado
*/
