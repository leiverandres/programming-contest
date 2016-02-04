#include <bits/stdc++.h>

using namespace std;

long fact(int n) {
  long ans = 1;
  if (n > 0) {
    for (int i = n; i > 0; i--) {
      ans *= i;
    }
  }
  return ans;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie();

  int n;
  cin >> n;
  cout << fact(n) << endl;
  return 0;
}
