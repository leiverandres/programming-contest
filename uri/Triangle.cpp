#include <bits/stdc++.h>

using namespace std;

int main() {
  cout << fixed; cout.precision(1);
  double x, y, z;
  bool tri = false;
  cin >> x >> y >> z;

  if (z < x and y < x) {
    tri = ((y + z) > x);
  } else if (z < y and x < y) {
    tri = ((x + z) > y);
  } else {
    tri = ((x+y) > z);
  }

  if (tri) {
    cout << "Perimetro = " << (x+y+z) << endl;
  } else {
    cout << "Area = " << (x+y) * z / 2.0<< endl;
  }

  return 0;
}
