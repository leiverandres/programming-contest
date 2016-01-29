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
    if (y < x) {
      int tmp = y;
      y = x;
      x = tmp;
    }

    for (int i = ++x; i < y; i++) {
      if (i%2 == 1)
        sum += i;
    }

    cout << sum << endl;
  }
  return 0;
}
