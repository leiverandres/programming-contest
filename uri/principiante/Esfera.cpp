#include <bits/stdc++.h>

using namespace std;

const double pi = 3.14159;

int main() {
  double r;
  cin >> r;
  double ans = (4.0/3.0) * pi * (r*r*r);
  cout << fixed << setprecision(3) << "VOLUME = " << ans << endl;
  return 0;
}
