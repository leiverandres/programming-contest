#include <bits/stdc++.h>
/*
  problem:https://www.hackerearth.com/code-monk-graph-theory-i/algorithm/monk-in-the-real-estate/
*/
using namespace std;

int main() {
  vector<bool> visited(10001);
  int t, edges, ans, x, y;
  cin >> t;
  while (t--) {
    cin >> edges;
    ans = 0;
    fill(visited.begin(), visited.end(), false);
    while (edges--) {
      cin >> x >> y;
      if (!visited[x]) {
        visited[x] = true;
        ans += 1;
      }

      if (!visited[y]) {
        visited[y] = true;
        ans += 1;
      }
    }
    cout << ans << endl;
  }
}
