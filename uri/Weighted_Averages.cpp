#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  double x, y, z, ans;
  cin >> t;
  while (t--) {
    ans = 0;
    cin >> x >> y >> z;
    ans = (x*2.0) + (y*3.0) + (z*5.0);
    cout << fixed << setprecision(1) <<(ans/10.0) << endl;
  }
  return 0;
}
