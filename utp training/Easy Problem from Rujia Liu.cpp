#include <bits/stdc++.h>
using namespace std;
//https://www.urionlinejudge.com.br/judge/es/problems/view/1424
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, m, k, v, aux;
  while (cin >> n >> m) {
    map<int , vector<int> > occur;
    for (int i = 1; i <= n; i++) {
      cin >> aux;
      occur[aux].push_back(i);
    }

    while (m--) {
      cin >> k >> v;
      if (occur[v].size() >= k) {
        cout << occur[v][k-1] << endl;
      } else {
        cout << 0 << endl;
      }
    }
  }
  return 0;
}
