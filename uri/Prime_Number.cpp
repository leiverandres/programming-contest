#include <bits/stdc++.h>
#define N 10000000
using namespace std;

bool is_prime[N];

void sieve() {
  memset(is_prime, true, sizeof(is_prime[0]));
  is_prime[0] = is_prime[1] = false;

  for (int i = 2; i <= N; i++) {
    if (is_prime[i]) {
      for (int j = i; j * i < N; j++){
        is_prime[i*j] = false;
      }
    }
  }

  for (int i = 0; i < 100; i++) {
    if (is_prime[i])
      cout << i << " ";
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  sieve();
  // int t, n;
  // cin >> t;
  // while (t--) {
  //   cin >> n;
  //   cout << n;
  //   if (is_prime(n)) {
  //     cout << " nao eh primo" << endl;
  //   } else {
  //     cout << " eh primo" << endl;
  //   }
  // }
  return 0;
}
