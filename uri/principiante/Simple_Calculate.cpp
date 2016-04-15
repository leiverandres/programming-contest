#include <bits/stdc++.h>

using namespace std;

int main() {
  cout << fixed; cout.precision(2);
  int code, units, in = 2;
  double price, ans = 0;
  while (in--) {
    cin >> code >> units >> price;
    ans += (units * price);
  }
  cout << "VALOR A PAGAR: R$ " << ans << endl;
  return 0;
}
