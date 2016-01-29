#include <bits/stdc++.h>

using namespace std;

int main() {
  int x, z;
  cin >> x >> z;
  while (z <= x) {
    cin >> z;
  }
  int sum = x, ans = 1;
  while (sum <= z) {
    sum += (x++);
    ans++;
  }

  cout << ans << endl;
  return 0;
}
