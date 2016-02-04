#include <bits/stdc++.h>

using namespace std;

int main() {
  char op;
  double sum = 0, aux;
  cin >> op;
  for (int i = 0; i < 12; i++) {
    for (int j = 0; j < 12; j++) {
      cin >> aux;
      if ((j < i) and (i+j >= 12)) {
        sum += aux;
      }
    }
  }
  cout << fixed << setprecision(1) << ((op == 'S')? sum: sum/30.0) << endl;
  return 0;
}
