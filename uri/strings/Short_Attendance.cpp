#include <bits/stdc++.h>

using namespace std;

bool pass(string assis) {
  int good = 0, bad = 0;
  for (int i = 0; i < assis.size(); i++) {
    if (assis[i] == 'P')
      good++;
    if (assis[i] == 'A')
      bad++;
  }
  double per = double(good * 100) / double(good + bad);
  return per >= 75.0;
}

int main() {
  int tc, n;
  cin >> tc;
  while (tc--) {
    cin >> n;
    vector<string> s(n);
    vector<string> ans;
    string assis;
    for (int i = 0; i < n; i++) {
      cin >> s[i];
    }
    for (int i = 0; i < n; i++) {
      cin >> assis;
      if (!pass(assis)) {
        ans.push_back(s[i]);
      }
    }
    for (int i = 0; i < ans.size(); i++) {
      cout << ((i == 0)? "": " ") << ans[i];
    }
    cout << endl;
  }
  return 0;
}
