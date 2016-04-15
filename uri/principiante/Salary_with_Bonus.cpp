#include <bits/stdc++.h>

using namespace std;

int main() {
  cout << fixed; cout.precision(2);
  string name;
  double salary, sell, ans;
  cin >> name >> salary >> sell;
  ans = salary + (sell * 0.15);
  cout << "TOTAL = R$ " << ans << endl;
  return 0;
}
