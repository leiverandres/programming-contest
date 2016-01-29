#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(); cin.tie(NULL)
using namespace std;

int main() {
  fast;
  int x, y;
  cin >> x >> y;
  for (int i = 1; i <= y;) {
    for (int j = 0; j < x; j++) {
      cout << i++ << ((j == (x-1))? "": " ");
    }
    cout << endl;
  }
  return 0;
}
