#include <bits/stdc++.h>

using namespace std;

int main () {
  int cases;
  long long n, ans, count;
  cin>>cases;
  while (cases--) {
    cin>>n;
    ans = count = 0;
    for (int i = 0; pow(2, i) <= n; ++i) {
      count += pow(2, i);
    }
    ans = ((n * (n+1)) / 2LL) - (2 * count);
    cout<<ans<<endl;
  }
  return 0;
}
