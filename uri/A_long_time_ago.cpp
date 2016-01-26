#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t, n, base;
  bool dc;
  cin >> t;
  while (t--) {
    base = 2015;
    cin >> n;
    if ((base-n) > 0) {
      base -= n;
      dc = true;
    } else if ((base-n) == 0) {
      base = 1;
      dc = false;
    }else {
      base = n - 2015 + 1;
      dc = false;
    }

    cout << base << ((dc)? " D.C.":" A.C.") << endl;
  }
  return 0;
}
