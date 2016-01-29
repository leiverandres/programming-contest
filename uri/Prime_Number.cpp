#include <bits/stdc++.h>
#define N 10000001
using namespace std;

vector<bool> is_prime(N, true);

void sieve() {
  is_prime[0] = is_prime[1] = false;
  for (int i = 2; i <= N; i++) {
    if (is_prime[i]) {
      for (int j = 2; j * i < N; j++){
        is_prime[i*j] = false;
      }
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  sieve();
  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    cout << n;
    if (is_prime[n]) {
      cout << " eh primo" << endl;
    } else {
      cout << " nao eh primo" << endl;
    }
  }
  return 0;
}
