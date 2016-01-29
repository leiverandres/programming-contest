#include <bits/stdc++.h>
using namespace std;

int main() {
  cout << fixed; cout.precision(2);

  double n, tax = 0;
  bool flag = false;
  cin >> n;
  if (n >= 0.0 and n <= 2000.0) {
    cout << "Isento" << endl;
    flag = true;
  } else if (n > 2000.0 and n <= 3000.0) {
    n -= 2000.0;
    tax = n * 0.08;
  } else if (n > 3000.0 and n <= 4500.0) {
    n -= 3000.0;
    tax = n * 0.18 + 1000.0 * 0.08;
  } else if (n > 4500.0){
    n -= 4500.0;
    tax = n * 0.28 + 1500 * 0.18 + 1000 * 0.08 ;
  }

  if (!flag)
    cout << "R$ " << tax << endl;

  return 0;
}
