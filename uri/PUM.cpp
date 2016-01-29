#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  int i = 1;
  while (n--) {
    for (int j = 0; j < 3; j++) {
      cout << i++ << " ";
    }
    cout << "PUM" << endl;
    i += 1;
  }
  return 0;
}
