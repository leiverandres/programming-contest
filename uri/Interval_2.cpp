#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, aux, in = 0, out = 0;
  cin >> n;
  while (n--) {
    cin >> aux;
    if (aux >= 10 and aux <= 20)
      in++;
    else
      out++;
  }

  cout << in << " in" << endl;
  cout << out << " out" << endl;
  return 0;
}
