#include <bits/stdc++.h>

using namespace std;

const double pi = 3.14159;

int main() {
  cout << fixed; cout.precision(4);
  double x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  double ans = sqrt(((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1)));
  cout << ans << endl;
}
