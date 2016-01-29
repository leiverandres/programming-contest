#include <bits/stdc++.h>

using namespace std;

int main() {
  cout << fixed; cout.precision(2);
  double acum, aux;
  int nums = 0;
  while (cin >> aux) {
    if (aux >= 0.0 and aux <= 10.0) {
      acum += aux;
      nums++;
      if (nums == 2) {
        cout << "media = " << acum/2 << endl;
        nums = 0;
        acum = 0.0;
      }
    } else {
      cout << "nota invalida" << endl;
    }
  }
  return 0;
}
