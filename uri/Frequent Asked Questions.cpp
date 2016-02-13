#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, k, p, ans;
  while (cin >> n >> k and n+k) {
    vector <int> v(1000, 0);
    ans = 0;
    for (int i = 0; i < n; i++) {
      cin >> p;
      v[p]++;
    }
    for (int i = 0; i < 1000; i++) {
      if (v[i] >= k) {
        ans++;
      }
    }
    cout << ans << endl;
  }
  return 0;
}
