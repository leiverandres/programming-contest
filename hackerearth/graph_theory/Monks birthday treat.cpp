#include <bits/stdc++.h>

using namespace std;

class Graph {
  int vertices;
  list<int> *adj;
public:
  Graph(int vertices);
  void add_edge(int v, int w);
  int bfs(int s);
};

Graph::Graph(int vertices) {
  this->vertices = vertices;
  adj = new list<int>[vertices];
}

void Graph::add_edge(int v, int w) {
  adj[v].push_back(w);
}

int Graph::bfs(int s) {
  queue<int> q;
  vector<int> visited(vertices, false);
  list<int>::iterator i;
  int components = 1;
  q.push(s);
  visited[s] = true;
  while (!q.empty()) {
    s = q.front();
    q.pop();
    for (i = adj[s].begin(); i != adj[s].end(); i++) {
      if (!visited[*i]) {
        components++;
        visited[*i] = true;
        q.push(*i);
      }
    }
  }

  return components;
}

int main() {
  int nodes, edges, x, y;
  cin >> nodes >> edges;
  Graph g(nodes);
  while (edges--) {
    cin >> x >> y;
    g.add_edge(x-1, y-1);
  }
  int ans = 5000, aux;
  for (int i = 0; i < nodes; i++) {
    ans = min(ans, g.bfs(i));
  }

  cout << ans << endl;

}
