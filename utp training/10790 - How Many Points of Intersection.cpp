#include <bits/stdc++.h>
#define fast_in ios_base::sync_with_stdio(false); cin.tie(NULL)

using namespace std;

int main() {
  fast_in;
  long a, b, caso = 1;
  while ((cin >> a >> b) && (a+b)) {
    long long int ans = (a * b * (a-1) * (b-1)) / 4;
    cout << "Case " << caso++ << ": " << ans << endl;
  }

  return 0;
}
