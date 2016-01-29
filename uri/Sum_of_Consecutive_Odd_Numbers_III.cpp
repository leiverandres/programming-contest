#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t, x, y, sum;
  cin >> t;
  while (t--) {
    sum = 0;
    cin >> x >> y;
    if (x%2 == 0)
      x++;

    for (int i = 0, j = x; i < y; i++, j += 2) {
      sum += j;
    }
    cout << sum << endl;
  }
  return 0;
}
