#include <bits/stdc++.h>
#define MOD 1000007
using namespace std;

long long mod_pow (long long a, long long b) {
  long long ans = 1;
  while (b) {
    if (b & 1)
      ans = (ans * a) % MOD;
    a = (a * a) % MOD;
    b >>= 1;
  }
  return ans % MOD;
}
int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long a, b;
  while ((cin>>a>>b) && a != -1 && b != -1) {
    cout<<(mod_pow(2, b + 1) - mod_pow(2, a) + MOD) %  MOD<<endl;
  }
}
