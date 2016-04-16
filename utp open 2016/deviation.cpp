#include <bits/stdc++.h>
#define D(x) cout << #x " = " << x << endl

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  double n;
  while (cin >> n && n) {
    double term1 = 4* (n * (n+1) * (2*n + 1) / 6);
    double term2 = 2*n*(n + 1);
    double term3 = n;
    double term4 = 2 * (n*n) * (n + 1);
    double term5 = (2 * (n*n));
    double term6 = (n*n*n);
    double sumAns = term1 - term2 + term3 - term4 + term5 + term6;
    double ans = sqrt(sumAns / (n-1));
    cout << fixed << setprecision(6) << ans << endl;
  }
  return 0;
}
