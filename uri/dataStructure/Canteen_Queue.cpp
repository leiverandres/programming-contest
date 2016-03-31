#include <bits/stdc++.h>

using namespace std;

int main() {
  int tc, n;
  cin >> tc;
  while (tc--) {
    int ans = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    vector<int> v2(v);
    sort(v2.rbegin(), v2.rend());
    for (int i = 0; i < n; i++) {
      if (v[i] == v2[i])
        ans++;
    }
    cout << ans << endl;
  }
  return 0;
}
