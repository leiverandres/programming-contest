#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
  fast;
  cout << fixed; cout.precision(1);
  double aux;
  for (int i = 0; i < 100; i++) {
    cin >> aux;
    if (aux <= 10) {
      cout << "A[" << i << "] = " << aux << endl;
    }
  }
}
