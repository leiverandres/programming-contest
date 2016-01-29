#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
  fast;
  double x, y;
  cin >> x >> y;
  if (x == 0.0 and y == 0.0) {
    cout << "Origem" << endl;
  } else if (x == 0.0 and y != 0.0) {
    cout << "Eixo X" << endl;
  } else if (x != 0.0 and y == 0.0) {
    cout << "Eixo Y" << endl;
  } else if (x >= 0.1) {
    if (y > 0.1) {
      cout << "Q1" << endl;
    } else {
      cout << "Q4" << endl;
    }
  } else if (x < 0.1){
    if (y > 0.1) {
      cout << "Q2" << endl;
    } else {
      cout << "Q3" << endl;
    }
  }
}
