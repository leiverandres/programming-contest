#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie();

  char op;
  double sum = 0, aux;
  cin >> op;

  for (int i = 0; i < 12; i++) {
    for (int j = 0; j < 12; j++) {
      cin >> aux;
      if (j < i) {
        sum += aux;
      }
    }
  }

  cout << ((op == 'S')? sum: sum/66.0) << endl;
  return 0;
}
