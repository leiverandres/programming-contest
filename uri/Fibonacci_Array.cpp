#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

long long fib[61];
void calculate() {
  fib[0] = 0;
  fib[1] = 1;
  for (int i = 2; i < 61; i++) {
    fib[i] = fib[i-1] + fib[i-2];
  }
}

int main() {
  fast;
  calculate();
  int t, aux;
  cin >> t;
  while (t--) {
    cin >> aux;
    cout << "Fib(" << aux << ") = " << fib[aux] << endl;
  }
}
