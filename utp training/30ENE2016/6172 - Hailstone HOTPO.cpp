#include <bits/stdc++.h>

using namespace std;

int max_collatz(int n) {
  int maxi = n;
  while (n != 1) {
    if (n%2 == 0) {
      n = (n>>1);
    } else {
      n = (n * 3) + 1;
    }
    maxi = max(maxi, n);
  }
  return maxi;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int p, set, n;
  cin >> p;
  while (p--) {
    cin >> set >> n;
    cout << set << " " << max_collatz(n) << endl;
  }

  return 0;
}
