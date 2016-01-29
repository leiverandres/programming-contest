#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
  fast;
  cout << fixed; cout.precision(4);
  double n;
  cin >> n;
  for (int i = 0; i < 100; i++) {
    cout << "N[" << i << "] = " << n << endl;
    n /= 2.0;
  }
}
