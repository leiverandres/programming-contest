#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie();

  int t;
  double x, y;
  cin >> t;
  while (t--) {
    cin >> x >> y;
    if (y == 0) {
      cout << "divisao impossivel" << endl;
    } else {
      cout << fixed << setprecision(1) << x/y << endl;
    }
  }
  return 0;
}
