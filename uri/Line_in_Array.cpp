#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(); cin.tie(NULL)
using namespace std;

int main() {
  fast;
  cout << fixed; cout.precision(1);
  int row;
  double mat[12][12], sum = 0;
  char op;

  cin >> row >> op;
  for (int i = 0; i < 12; i++) {
    for (int j = 0; j < 12; j++) {
      cin >> mat[i][j];
    }
  }

  for (int i = 0; i < 12; i++) {
    sum += mat[row][i];
  }

  cout << ((op == 'S')? sum: sum/12.0) << endl;

  return 0;
}
