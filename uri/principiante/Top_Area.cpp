#include <bits/stdc++.h>

using namespace std;

int main() {
  cout << fixed; cout.precision(1);
  char op;
  double aux, sum = 0;
  cin >> op;
  for (int i = 0; i < 12; i++) {
    for (int j = 0; j < 12; j++) {
      cin >> aux;
      if (j > i and j <= (10 - i)) {
        sum += aux;
      }
    }
  }
  cout << ((op == 'S')? sum: sum/30.0) << endl;
  return 0;
}
