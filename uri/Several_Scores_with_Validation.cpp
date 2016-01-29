#include <bits/stdc++.h>

using namespace std;

bool is_valid(double n) {
  return (n >= 0.0 and n <= 10.0);
}

int main() {
  cout << fixed; cout.precision(2);
  double acum, aux;
  int nums = 0;
  while ((cin >> aux) and aux != 2) {
    if (is_valid(aux)) {
      nums++;
      acum += aux;
      if (nums == 2) {
        cout << "media = " << (acum/2) << endl;
        acum = 0.0;
        nums = 0;
        do {
          cout << "novo calculo (1-sim 2-nao)" << endl;
        } while (cin >> aux and aux != 1 and aux != 2);
        if (aux == 2)
          break;
      }
    } else {
      cout << "nota invalida" << endl;
    }
  }
}
