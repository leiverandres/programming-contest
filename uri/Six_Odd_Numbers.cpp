#include <bits/stdc++.h>

using namespace std;

int main() {
  int x;
  cin >> x;
  x = ((x%2 == 1)?x:x+1);
  for (int i = 0; i < 6; i++) {
    cout << x << endl;
    x+=2;
  }
  return 0;
}
