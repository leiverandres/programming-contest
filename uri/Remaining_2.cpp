#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie();

  int n;
  cin >> n;
  for (int i = 1; i <= 10000; i++) {
    if (i%n == 2) {
      cout << i << endl;
    }
  }
  return 0;
}
