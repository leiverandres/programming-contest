#include <bits/stdc++.h>

using namespace std;

class Graph {
public:
  int v;
  list<int> *adj;
  vector<int> color;
  Graph(int v) {
    this->v = v;
    adj = new list<int>[v];
    color.assign(v, -1);
  }

  void add_edge(int v, int w) {
    adj[v].push_back(w);
    adj[w].push_back(v);
  }

  bool dfs(int src, bool c) {
    list<int>::iterator i;
    if (color[src] != -1) {
      return c == color[src];
    }
    color[src] = c;
    for (i = adj[src].begin(); i != adj[src].end(); i++) {
      if (!dfs(*i, (c+1)%2)) {
        return false;
      }
    }
    return true;
  }
};


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, aux;
  cin >> n;
  Graph g(n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> aux;
      if (!aux) {
        g.add_edge(i, j);
      }
    }
  }

  bool flag = true;
  for (int i = 0; i < n; i++) {
    if (g.color[i] == -1) {
      if (!g.dfs(i, 0)) {
        flag = false;
        break;
      }
    }
  }

  cout << ((flag)? "Bazinga!": "Fail!") << endl;

  return 0;
}
