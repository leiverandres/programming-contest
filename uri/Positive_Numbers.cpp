#include <bits/stdc++.h>

using namespace std;

int main() {
  int in = 6, ans = 0;
  double aux;
  while (in--) {
    cin >> aux;
    ans += ((aux > 0)? 1 : 0);
  }
  cout << ans << " valores positivos" << endl;
  return 0;
}
