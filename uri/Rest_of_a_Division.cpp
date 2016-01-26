#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  if (b < a) {
    int temp = a;
    a = b;
    b = temp;
  }

  for (int i = a+1; i < b; i++) {
    if ((i%5 == 2) or (i%5 == 3)) {
      cout << i << endl;
    }
  }
  return 0;
}
