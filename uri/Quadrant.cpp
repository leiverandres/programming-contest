#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
  fast;
  int a, b;
  while ((cin >> a >> b) and (a*b)) {
    if (a > 0) {
      if (b > 0) {
        cout << "primeiro" << endl;
      } else {
        cout << "quarto" << endl;
      }
    } else {
      if (b > 0) {
        cout << "segundo" << endl;
      } else {
        cout << "terceiro" << endl;
      }
    }
  }
}
