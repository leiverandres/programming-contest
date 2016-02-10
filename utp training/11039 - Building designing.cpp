#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t, n, prev_valid, aux;
  cin >> t;
  while (t--) {
    cin >> n;
    vector < pair<int, bool> > ni(n);
    vector <bool> co(n);
    for (int i = 0; i < n; i++) {
      cin >> aux;
      ni[i] = make_pair(abs(aux), (aux > 0));
    }
    sort(ni.rbegin(), ni.rend());
    prev_valid = ni[0].second;
    int ans = 1;
    for (int i = 1; i < n; i++) {
      if (ni[i].second != prev_valid) {
        ans++;
        prev_valid = ni[i].second;
      }
    }

    cout << ans << endl;
  }
  return 0;
}
