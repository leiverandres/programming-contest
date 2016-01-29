#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b;
  while ((cin >> a >> b) and a != b) {
    cout << ((a>b)?"Decrescente":"Crescente") << endl;
  }
  return 0;
}
