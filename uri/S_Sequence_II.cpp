#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
  fast;
  double sum = 0, i;
  int j;

  for (i = 1.0, j = 0; i <= 39.0; i+=2.0, j++) {
    sum += (i / (double)(1<<j));
  }

  cout << fixed << setprecision(2) << sum << endl;
}
