#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
//http://codeforces.com/problemset/problem/267/A
using namespace std;

int main() {
  fast;
  int n;
  long x, y;
  cin >> n;

  while (n--) {
    cin >> x >> y;
    long ans = 0;
    while (x and y ) {
      if (y > x) {
        ans += y / x;
        y -= (y / x) * x;
      } else {
        ans += x / y;
        x -= (x / y) * y;
      }
    }
    cout << ans << endl;
  }
  return 0;
}
