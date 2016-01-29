#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  double aux, sum = 0;
  int in = 6, ans = 0;
  while (in--) {
    cin >> aux;
    if (aux >= 0) {
      sum += aux;
      ans++;
    }
  }

  cout << ans << " valores positivos" << endl;
  cout << fixed << setprecision(1) <<sum / ans << endl;

  return 0;
}
