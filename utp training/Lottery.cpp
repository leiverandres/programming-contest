#include <bits/stdc++.h>

using namespace std;

int main () {
  int k, n, tmp;
  cin>>k>>n;
  vector<int> arr(n, 0);
  for (int i = 0; i < k; ++i) {
    cin>>tmp;
    arr[tmp-1] += 1;
  }
  int ans = 0;
  int num = k/n;

  sort(arr.rbegin(), arr.rend());

  for(int i = 0; i < n; ++i) {
    if(arr[i] > num)
      ans += arr[i] - num;
  }
  cout<<ans<<endl;
  return 0;
}
