#include <bits/stdc++.h>
//http://codeforces.com/contest/615/problem/A
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m, bulbs, x;
  cin >> n >> m;
  vector<bool> state(m, false);
  for (int i = 0; i < n; i++) {
    cin >> bulbs;
    while (bulbs--) {
      cin >> x;
      state[x-1] = true;
    }
  }
  bool flag = true;
  for (int i = 0; i < m; i++) {
    if (!state[i]){
      flag = false;
      break;
    }
  }
  cout << ((flag)? "YES":"NO") << endl;

}
