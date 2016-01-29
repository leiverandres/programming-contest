#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  double sum = 0, elem = 0;
  while (cin >> n and n >= 0) {
    sum += n;
    elem++;
  }
  double avrg = sum / elem;
  cout << fixed << setprecision(2) << avrg << endl;
  return 0;
}
