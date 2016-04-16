#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, q, l, r, aux;
  while (cin >> n) {
    int ans;
    vector< vector<int> > vec(n+1, vector<int>(10));
    for (int i = 1; i <= n; i++) {
      cin >> aux;
      vec[i] = vec[i-1];
      vec[i][aux] = vec[i-1][aux] + 1;
    }
    cin >> q;
    while (q--) {
      ans = 0;
      cin >> l >> r;
      for (int i = 0; i < 10; i++) {
        if ((vec[r][i] - vec[l-1][i]) > 0) {
          ans++;
        }
      }
      cout << ans << endl;
    }
  }
  return 0;
}
