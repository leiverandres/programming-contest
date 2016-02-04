#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
const ull mod = 2147483647;

ull power(ull base, ull expo) {
  ull ans = 1;
  while (expo) {
    if (expo & 1) {
      ans *= base;
      ans %= mod;
    }
    expo >>= 1;
    base = base * base;
    base %= mod;
  }
  return ans;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ull r;
  cin >> r;
  cout << power(3, r) << endl;
  return 0;
}
