#include <bits/stdc++.h>
#define D(x) cout << #x " = " << x << endl
using namespace std;

int solver(int n) {
  if (n == 0) return 0;
  int x = floor(( sqrt ( (8 * (double)n) + 1) - 1) / 2);
  int t = (x * (x+1)) / 2;
  return solver(n - t) + 1;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  while (cin >> n) {
    cout << solver(n) << endl;
  }
  return 0;
}
