#include <bits/stdc++.h>
using namespace std;

//https://www.urionlinejudge.com.br/judge/en/problems/view/1835

class Graph {
public:
  list<int> *adj;
  int vertices;
  vector<bool> visited;
  Graph(int vertices);
  void add_edge(int v, int w);
  void dfs(int s);
};

Graph::Graph(int vertices) {
  this->vertices = vertices;
  adj = new list<int>[vertices];
  visited.assign(vertices, false);
}

void Graph::add_edge(int v, int w) {
  adj[v].push_back(w);
  adj[w].push_back(v);
}

void Graph::dfs(int s) {
  visited[s] = true;
  list<int>::iterator it;
  for (it = adj[s].begin(); it != adj[s].end(); it++) {
    if (!visited[*it]) {
      dfs(*it);
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int cases, nodes, edges, x, y, components;
  cin >> cases;
  for (int caso = 1; caso <= cases; caso++) {
    components = 0;
    cin >> nodes >> edges;
    Graph g(nodes);
    while (edges--) {
      cin >> x >> y;
      g.add_edge(x-1, y-1);
    }

    for (int i = 0; i < nodes; i++) {
      if (!g.visited[i]) {
        g.dfs(i);
        components++;
      }
    }

    cout << "Caso #" << caso << ": ";
    if (components == 1) {
      cout << "a promessa foi cumprida\n";
    } else {
      cout << "ainda falta(m) " << (components-1) << " estrada(s)\n";
    }
  }
  return 0;
}
