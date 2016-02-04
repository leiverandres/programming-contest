#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
  fast;
  char op;
  double sum = 0, aux;
  cin >> op;
  for (int i = 0; i < 12; i++) {
    for (int j = 0; j < 12; j++) {
      cin >> aux;
      if (j < i and (i+j) <= 10) {
        sum += aux;
      }
    }
  }

  cout << ((op == 'S')? sum: sum/30.0) << endl;
  return 0;
}
