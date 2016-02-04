#include <bits/stdc++.h>

using namespace std;

long long fact(int n) {
  long long ans = 1;
  if (n > 0){
    for (int i = n; i >= 1; i--) {
      ans *= i;
    }
  }

  return ans;
}

int main() {
  int x, y;
  while (cin >> x >> y) {
    long long ans = fact(x) + fact(y);
    cout << ans << endl;
  }
  return 0;
}
