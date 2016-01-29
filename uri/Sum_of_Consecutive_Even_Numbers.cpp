#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
  fast;
  int x;
  long sum;
  while (cin >> x and x) {
    sum = 0;
    if (x & 1) {
      x++;
    }

    int s = 0;
    while (s < 5) {
      if (!(x & 1)) {
        sum += x;
        s++;
      }
      x++;
    }

    cout << sum << endl;

  }
}
