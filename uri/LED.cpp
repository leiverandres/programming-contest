#include <bits/stdc++.h>

using namespace std;

int main() {
  int leds[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
  int t;
  string n;

  cin >> t;
  while (t--) {
    cin >> n;
    long long int ans = 0;
    for (int i = 0; i < n.size(); i++) {
      ans += leds[n[i]-'0'];
    }
    cout << ans << " leds" <<endl;
  }
  return 0;
}
