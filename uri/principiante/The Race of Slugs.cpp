#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, num;
  while (cin >> n) {
    int max = -1;
    for (int i = 0; i < n; i++) {
      cin >> num;
      if (num > max) {
        max = num;
      }
    }
    if (max < 10) {
      cout << 1;
    } else if (max >= 10 and max < 20) {
      cout << 2;
    } else {
      cout << 3;
    }
    cout << endl;
  }

  return 0;
}
