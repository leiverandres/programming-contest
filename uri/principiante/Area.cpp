#include <bits/stdc++.h>

using namespace std;

const double pi = 3.14159;

int main() {
  cout << fixed; cout.precision(3);
  double a, b, c;
  cin >> a >> b >> c;
  double tri = (a * c) / 2.0;
  double cir = (pi * c * c);
  double tra = ((a + b) * c) / 2;
  double cua = b * b;
  double rec = a * b;
  cout << "TRIANGULO: " << tri << endl;
  cout << "CIRCULO: "   << cir << endl;
  cout << "TRAPEZIO: "  << tra << endl;
  cout << "QUADRADO: "  << cua << endl;
  cout << "RETANGULO: " << rec << endl;
  return 0;
}
