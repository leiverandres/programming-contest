#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m, ans = 0;
  cin >> n >> m;
  vector<int> sizes(n);
  for (int i = 0; i < n; ++i) {
    cin >> sizes[i];
  }

  sort(sizes.rbegin(), sizes.rend());
  int i = 0;
  while (m > 0 && i < n) {
    m -= sizes[i];
    ans++;
    i++;
  }

  cout << ans << endl;
  return 0;
}
