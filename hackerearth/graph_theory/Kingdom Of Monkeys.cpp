#include <bits/stdc++.h>
using namespace std;

class Graph{
public:
  int vertices;
  vector<bool> visited;
  list<long long> *adj;
  Graph(int v);
  void add_edge(long long v, long long w);
  long long bfs(long long s, vector<long long> &value);
};

Graph::Graph(int v) {
  this->vertices = v;
  visited.assign(v, false);
  adj = new list<long long> [v];
}

void Graph::add_edge(long long v, long long w) {
  adj[v].push_back(w);
  adj[w].push_back(v);
}

long long Graph::bfs(long long s, vector<long long> &value) {
  long long ans = value[s];
  queue<long long> q;
  list<long long>::iterator i;
  visited[s] = true;
  q.push(s);
  while (!q.empty()) {
    s = q.front();
    q.pop();
    for (i = adj[s].begin(); i != adj[s].end(); i++) {
      if (!visited[*i]) {
        ans += value[*i];
        visited[*i] = true;
        q.push(*i);
      }
    }
  }
  
  return ans;
}

int main() {
  int t, n, m, x, y;
  cin >> t;
  while (t--) {
    cin >> n >> m;
    vector<long long> bananas(n);
    Graph g(n);
    while (m--) {
      cin >> x >> y;
      g.add_edge(x-1, y-1);
    }

    for (int i = 0; i < n; i++) {
      cin >> bananas[i];
    }

    long long result = -1, aux;
    for (int i = 0; i < n; i++) {
      if (!g.visited[i]) {
        aux = g.bfs(i, bananas);
        result = max(result, aux);
      }
    }

    cout << result << endl;
  }
}
