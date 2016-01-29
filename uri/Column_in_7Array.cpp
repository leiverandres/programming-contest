#include <bits/stdc++.h>

using namespace std;

int main() {
  cout << fixed; cout.precision(1);
  int col;
  double mat[12][12], sum = 0.0;
  char op;
  cin >> col >> op;
  for (int i = 0; i < 12; i++) {
    for (int j = 0; j < 12; j++) {
      cin >> mat[j][i];
    }
  }

  for (int i = 0; i < 12; i++) {
    sum += mat[col][i];
  }

  cout << ((op == 'S')? sum: sum/12.0) << endl;
}
