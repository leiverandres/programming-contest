#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y, n;
  cin >> n;
  while (n--) {
    cin >> x >> y;
    if (y != 0) {
      cout << fixed << setprecision(1) << (double)x/y << endl;
    } else {
      cout << "divisao impossivel" << endl;
    }
  }
  return 0;
}
