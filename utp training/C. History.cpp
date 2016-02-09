#include <bits/stdc++.h>
//codeforces
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, b, end;
  cin >> n;
  vector<int> init(n);
  map <int, int> val;
  for (int i = 0; i < n; i++) {
    cin >> init[i] >> end;
    val[init[i]] = end;
  }
  sort(init.begin(), init.end());

  int maxi = val[init[0]], ans = 0;
  for (int i = 1; i < n; i++) {
    if (val[init[i]] < maxi) {
      ans++;
    } else {
      maxi = val[init[i]];
    }
  }
  cout << ans << endl;
  return 0;
}
