#include <bits/stdc++.h>
#define fasr ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

int main() {
  long x, y, m;
  cin >> x >> y >> m;
  long aux = 0, ans = 1;
  if ((x <= 0 && y <= 0)) {
    cout << "-1" << endl;
  } else {
      if ((m - (x + y)) >  (m - (y + x))) {
        aux = x + y;
      } else {
        aux = y + x;
      }
      while (aux < m) {
        ans++;
        aux += aux;
      }

    cout << ans << endl;
  }
  return 0;
}
