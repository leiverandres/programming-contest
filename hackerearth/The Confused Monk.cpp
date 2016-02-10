#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)

using namespace std;

const long long MOD = 1000000007;

long long mod_pow(long long base, long long expo) {
  long long ans = 1;
  while (expo) {
    if (expo & 1) {
      ans *= base;
      ans %= MOD;
    }
    expo >>= 1;
    base = base * base;
    base %= MOD;
  }
  return ans;
}

int main() {
  int n;
  long long g, f, aux;
  cin >> n;
  cin >> aux;
  f = g = aux;
  for (int i = 1; i < n; i++) {
    cin >> aux;
    g = __gcd(g, aux);
    f = (f * aux) % MOD;
  }
  long long ans = mod_pow(f, g);
  cout << ans << endl;

  return 0;
}
