#include <bits/stdc++.h>

using namespace std;

bool test(int a, int b, int c, int d) {
  return b > c and d > a
         and c + d > a + b
         and c >= 0
         and d >= 0
         and (a % 2) == 0;
}

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if (test(a, b, c, d)) {
    cout << "Valores aceitos" << endl;
  } else {
    cout << "Valores nao aceitos" << endl;
  }

  return 0;
}
