#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  cout << fixed; cout.precision(2);
  int t;
  double q, a, b;
  while (cin >> t and t) {
    int nc = 1;
    for (int ca = 1; ca <= t; ca++) {
      cin >> q >> a >> b;
      cout << "Size #" << ca << ":" << endl;
      cout << "Ice Cream Used: " << ((a + b) / 2) * (q * 5) << " cm2" << endl;
    }
    cout << endl;
  }
  return 0;
}
