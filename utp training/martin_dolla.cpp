#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
//http://codeforces.com/problemset/problem/41/B
using namespace std;

int main() {
  fast;
  int n, b;
  cin >> n >> b;
  int ans = 0;
  vector<int> prices(n);
  for (int i = 0; i < n; i++) {
    cin >> prices[i];
  }
  int nuevo = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      //max  mayor, cuanto puedo comprar * venderlo otros dias + lo que me sobro el primer
      ans = max( ans,((b/prices[i]) * prices[j]) + (b%prices[i]) );
      cout << ((b/prices[i]) * prices[j]) + (b%prices[i])  << " ";
    }
    cout << endl;
  }

  cout << ans << endl;
  return 0;
}
