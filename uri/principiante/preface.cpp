#include <bits/stdc++.h>

using namespace std;

int main() {
  double a, b;
  cin >> a >> b;
  if (b < 0 and a < 0) {
    int q = ceil(a / b);
    int r = (q * -(int)b) + (int)a;
    cout << q << " " << r << endl;
  } else if (b < 0) {
    cout << (int)(a / b) << " " << (int)a % (int)b << endl;
  } else if (b > 0) {
    int r = a - (b * floor(a/b));
    int q = (a - r) / b;
    cout << q << " " << r << endl;
  }
  return 0;
}
