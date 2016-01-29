#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
  fast;
  cout << fixed; cout.precision(2);
  double sum = 0;
  for (double i = 1; i <= 100; i++) {
    sum += 1/i;
  }

  cout << sum << endl;
}
