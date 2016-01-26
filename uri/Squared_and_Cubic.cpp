#include <bits/stdc++.h>

using namespace std;

void solve(int n) {
  int po = n;
  for (int i = 0; i < 3; i ++) {
    cout << n << ((i<2)?" ":"");
    n *= po;
  }
}

int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    solve(i);
    cout << endl;
  }

  return 0;
}
