#include <bits/stdc++.h>

using namespace std;

int main() {
 cout << fixed; cout.precision(6);
 int d, l, v1, v2;
 double ans = 0.0;
 cin >> d >> l >> v1 >> v2;
 ans = fabs(d - l) / (double)(fabs(-v1 - v2));
 cout << ans << endl;
 return 0;
}
