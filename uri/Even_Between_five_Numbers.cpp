#include <bits/stdc++.h>

using namespace std;

int main() {
  int in = 5, aux, ans = 0;

  while (in--) {
    cin >> aux;
    if (aux%2 == 0)
      ans++;
  }

  cout << ans << " valores pares" << endl;
}
