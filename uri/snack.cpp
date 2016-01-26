#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  double v[5] = {4.0, 4.5, 5.0, 2.0, 1.5}, y;
  int x;
  cin >> x >> y;
  cout << "Total: R$ " << fixed << setprecision(2) <<  (y * v[x-1]) << endl;
  return 0;
}
