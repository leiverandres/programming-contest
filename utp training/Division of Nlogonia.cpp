#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int k, x, y, n, m;
  while (cin >> k and k) {
    cin >> n >> m;
    while (k--) {
      cin >> x >> y;

      if (x == n or y == m) {
        cout << "divisa" << endl;
      } else if (x > n and y > m) {
        cout << "NE" << endl;
      } else if (x > n and y < m) {
        cout << "SE" << endl;
      } else if (x < n and y > m) {
        cout << "NO" << endl;
      } else {
        cout << "SO" << endl;
      }
    }
  }
}
