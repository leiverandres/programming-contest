#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)

using namespace std;

int main() {
  int n, ans;
  while (cin >> n and n) {
    ans = 0;
    // (n * (n+1) * (2 * n + 1)) / 6
    for (int i = 1; i <= n; i++) {
      ans += (i*i);
    }
    cout << ans << endl;
  }

  return 0;
}
