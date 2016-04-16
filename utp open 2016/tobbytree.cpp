#include <bits/stdc++.h>
#define D(x) cout << #x " = " << x << endl
using namespace std;

vector<int> bfs(vector< vector<int> > &g, int s, int t, int n) {
  vector<int> p(n, -1);
  vector<bool> visited(n, false);
  queue<int> q;
  q.push(s);
  visited[s] = true;

  while (!q.empty()) {
    int cur = q.front();
    q.pop();
    for (int i = 0; i < g[cur].size(); i++) {
      if (g[cur][i] == t) {
        p[g[cur][i]] = cur;
        visited[g[cur][i]] = true;

        vector<int> ans;
        int aux = t;
        while (aux != -1) {
          ans.push_back(aux);
          aux = p[aux];
        }
        return ans;
      }
      if (!visited[g[cur][i]]) {
        visited[g[cur][i]] = true;
        p[g[cur][i]] = cur;
        q.push(g[cur][i]);
      }
    }
  }
}

int main() {
  int nodes, q, u, v, to, from, op;
  cin >> nodes;
  vector<int> val(nodes);
  vector< vector<int> > g(nodes, vector<int> ());
  for (int i = 0; i < nodes; i++) {
    cin >> val[i];
  }

  for (int i = 0; i < (nodes - 1); i++) {
    cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
  }

  cin >> q;
  while (q--) {
    cin >> op >> from >> to;
    if (op == 2) {
      val[from] = to;
    } else {
      vector<int> ans = bfs(g, from, to, nodes);
      int q_ans = __gcd(val[ans[0]], val[ans[1]]);
      for (int i = 2; i < ans.size(); i++) {
        q_ans = __gcd(q_ans, val[ans[i]]);
      }
      cout << q_ans << endl;
    }
  }
  return 0;
}
