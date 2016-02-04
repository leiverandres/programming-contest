#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  long long ans = 0;
  cin >> n;
  vector <long long> nu(n);
  for (int i = 0; i < n; i++) {
    cin >> nu[i];
  }
  sort(nu.rbegin(), nu.rend());
  for (int i = 0; i < n; i++) {
    ans += nu[i];
    for (int j = i+1; nu[i] == nu[j]; j++) {
      if (nu[j] > 0) {
        nu[j]--;
      } else {
        nu[j] = 0;
      }
    }
    // cout << "taken " << nu[i] << endl;
  }

  cout << ans << endl;

}
