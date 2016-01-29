#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  char op;
  double mat[12][12], sum = 0;
  cin >> op;
  for (int i = 0; i < 12; i++) {
    for (int j = 0; j < 12; j++) {
      cin >> mat[i][j];
    }
  }

  for (int i = 0; i < 12; i++) {
    for (int j = i+1; j < 12; j++) {
      sum += mat[i][j];
    }
  }

  cout << fixed << setprecision(1) << ((op == 'S')? sum: (sum/66.0)) << endl;
  return 0;
}
