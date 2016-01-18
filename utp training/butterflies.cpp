#include <bits/stdc++.h>
//https://www.urionlinejudge.com.br/judge/en/problems/view/1901
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, x, y, ans = 0;
  cin >> n;
  int forest[n][n];
  vector<bool> vec(1005, false);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> forest[i][j];
    }
  }

  for (int i = 0; i < (2*n); i++) {
    cin >> x >> y;
    if (!vec[forest[x-1][y-1]]) {
      ans++;
      vec[forest[x-1][y-1]] = true;
    }
  }

  cout << ans << endl;
  return 0;
}
