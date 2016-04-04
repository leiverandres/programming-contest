#include <bits/stdc++.h>
#define N 100002
#define INF INT_MAX

using namespace std;

int values[N][3];
long memo[N][3];

long dp(int shop, int type_prev, int n) {
  if (shop >= n) return 0;
  if (memo[shop][type_prev] != -1) return memo[shop][type_prev];

  long best = INF;
  for (int i = 0; i < 3; i++) {
    if (i != type_prev) {
      best = min(best, values[shop][i] + dp(shop + 1, i, n));
    }
  }
  return memo[shop][type_prev] = best;
}

int main() {
  int tc, n;;
  cin >> tc;
  while (tc--) {
    cin >> n;
    memset(memo, -1, sizeof(memo));
    for (int i = 0; i < n; i++) {
      cin >> values[i][0] >> values[i][1] >> values[i][2];
    }

    long ans = INF;
    for (int i = 0; i < 3; i++) {
      ans = min(ans, dp (0, i, n));
    }
    cout << ans << endl;
  }

  return 0;
}
