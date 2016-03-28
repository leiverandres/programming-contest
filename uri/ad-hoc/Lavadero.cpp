#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, la, lb, sa, sb;
  cin >> n >> la >> lb >> sa >> sb;

  if (n >= la and n <= lb and n >= sa and n <= sb) {
    cout << "possivel";
  } else {
    cout << "impossivel";
  }

  cout << endl;

  return 0;
}
