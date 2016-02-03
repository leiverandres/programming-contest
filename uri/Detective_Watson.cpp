#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie();

  int n;
  vector<int> id(100001, -1);
  while (cin >> n and n) {
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
      id[v[i]] = i + 1;
    }

    sort(v.rbegin(), v.rend());

    cout << id[v[1]] << endl;
  }
  return 0;
}
