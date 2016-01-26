#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, m;
  while ((cin>>n>>m) and (n*m) > 0) {
    if (m < n) {
      int temp = n;
      n = m;
      m = temp;
    }
    long long sum = 0;
    for (int i = n; i <= m; i++) {
      cout << i << " ";
      sum += i;
    }
    cout << "Sum=" << sum << endl;
  }
  return 0;
}
