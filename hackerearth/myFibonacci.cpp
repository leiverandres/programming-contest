#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b, n, ans = 0;
  cin>>a>>b>>n;
  int arr[n];
  arr[0] = a;
  arr[1] = b;
  for (int i = 2; i < n; ++i) {
    arr[i] = arr[i-2] + arr[i-1];
  }
  cout << arr[n-1] << endl;

  return 0;
}
