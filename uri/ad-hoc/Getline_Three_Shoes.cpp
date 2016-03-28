#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string n, size, type, line;
  int caso = 1;
  while (getline(cin, n)) {
    if (caso > 1)
      cout << endl;

    int F = 0, M = 0, I = 0;
    string line;

    getline(cin, line);
    stringstream ll(line);

    while (ll >> size >> type) {
      if (size == n) {
        I++;
        if (type == "F") {
          F++;
        } else {
          M++;
        }
      }
    }

    cout << "Caso " << caso++ << ":"<< endl;
    cout << "Pares Iguais: " << I << endl;
    cout << "F: " << F << endl;
    cout << "M: " << M << endl;
  }

  return 0;
}
