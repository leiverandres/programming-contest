#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t, size;
  char side;
  while (cin >> t) {
    vector< pair<int, int> > bo(32, make_pair(0,0));
    int ans = 0;
    while (t--) {
      cin >> size >> side;
      if (side == 'D') {
        bo[size-30].first++;
      } else {
        bo[size-30].second++;
      }
    }
    for (int i = 0; i < bo.size(); i++) {

      ans += min(bo[i].first, bo[i].second);
    }
    cout << ans << endl;
  }
}
