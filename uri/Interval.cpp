#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  double n;
  cin >> n;
  if (n >= 0 and n <= 25) {
    cout << "Intervalo [0,25]" << endl;
  } else if (n > 25.0 and n <= 50.0) {
    cout << "Intervalo (25,50]" << endl;
  } else if (n > 50.0 and n <= 75.0) {
    cout << "Intervalo (50,75]" << endl;
  } else if (n > 75.0 and n <= 100.0) {
    cout << "Intervalo (75,100]" << endl;
  } else {
    cout << "Fora de intervalo" << endl;
  }
  return 0;
}
