#include <bits/stdc++.h>
using namespace std;

int coolness(int n) {
  vector<bool> bin;
  int count = 0;
  while (n > 0) {
    bin.push_back(n&1);
    n >>= 1;
  }

  for (int i = bin.size()-2; i >= 0; i--) {
    if (bin[i] and !bin[i+1] and bin[i+2]) {
      count++;
    }
  }

  return count;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t, n, k, ans;
  cin >> t;
  while (t--) {
    ans = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
      if (coolness(i) >= k){
        ans++;
      }
    }
    cout << ans << endl;
  }

}
