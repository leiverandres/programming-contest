#include <bits/stdc++.h>

using namespace std;

bool is_perfect(int x) {
  long ans = 0;
  for (int i = 1; i < x; ++i) {
    if (x%i == 0) {
      ans += i;
    }
  }

  return ans == x;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int cases, n;
  cin >> cases;
  while (cases--) {
    cin >> n;

    cout << n << ((is_perfect(n))? " eh perfeito": " nao eh perfeito") << endl;
  }

  return 0;
}
