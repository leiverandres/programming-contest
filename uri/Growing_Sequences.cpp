#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int x;
  while ((cin >> x) and x) {
    for (int i = 1; i <= x; i++) {
      cout << i << ((i != x)? " ":"");
    }
    cout << endl;
  }
  return 0;
}
