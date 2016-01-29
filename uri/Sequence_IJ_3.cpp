#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  for (int i = 1, k = 7; i <= 9; i += 2, k += 2) {
    for (int j = 0; j < 3; j++) {
      cout << "I=" << i << " J=" << (k-j) << endl;
    }
  }
  return 0;
}
