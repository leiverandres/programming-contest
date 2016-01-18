#include <bits/stdc++.h>
//https://www.urionlinejudge.com.br/judge/en/problems/view/1582
using namespace std;

bool is_pyth(int x, int y, int z) {
  return (x*x) == ((y*y)+(z*z)) or (y*y) == ((x*x)+(z*z)) or (z*z) == ((x*x)+(y*y));
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int x, y, z;
  while (cin >> x >> y >> z) {
    if (is_pyth(x, y, z)) {
      if (__gcd(x, __gcd(y, z)) == 1) {
        cout << "tripla pitagorica primitiva" << endl;
      } else {
        cout << "tripla pitagorica" << endl;
      }
    } else {
      cout << "tripla" << endl;
    }
  }
  return 0;
}
