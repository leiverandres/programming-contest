#include <bits/stdc++.h>
using namespace std;

int fib[46];
void calculate() {
  fib[0] = 0;
  fib[1] = 1;
  for (int i = 2; i < 46; i++) {
    fib[i] = fib[i-1] + fib[i-2];
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  calculate();
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cout << fib[i] << ((i == (n-1))?"":" ");
  }

  cout << endl;
  return 0;
}
