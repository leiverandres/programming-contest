#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

bool greater_string(string a, string b) {
  return a + b < b + a;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  string ans = "";
  cin >> n;
  vector <string> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  sort(v.begin(), v.end(), greater_string);

  for (int i = 0; i < n; i++) {
    ans += v[i];
    // cout << v[i] << endl;
  }

  cout << ans << endl;

  return 0;
}
