#include <bits/stdc++.h>

using namespace std;

int main() {
  int a = 0, g = 0, d = 0, aux;
  while (cin >> aux and aux != 4) {
    if (aux == 1) {
      a++;
    } else if (aux == 2) {
      g++;
    } else if (aux == 3) {
      d++;
    }
  }

  cout << "MUITO OBRIGADO" << endl;
  cout << "Alcool: " << a << endl;
  cout << "Gasolina: " << g << endl;
  cout << "Diesel: " << d << endl;
  return 0;
}
