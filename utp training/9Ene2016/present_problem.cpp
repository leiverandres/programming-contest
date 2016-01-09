#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;
//https://icpcarchive.ecs.baylor.edu/index.php?option=onlinejudge&page=show_problem&problem=5012
typedef pair <int, int> pII;
int len;
class Graph {
public:
  int vertices;
  vector < priority_queue< pII , vector < pII >, greater< pII > > > adj;
  Graph(int vertices, vector < priority_queue< pII , vector < pII >, greater< pII > > > in);
  void add_edge(int v, int w, int k);
  // int dfs(int s);
  void show();
};

Graph::Graph(int vertices, vector < priority_queue< pII , vector < pII >, greater< pII > > > in) {
  this->vertices = vertices;
  this->adj = in;
}

void Graph::add_edge(int v, int w, int k) {
  adj[v].push(make_pair(k, w));
  adj[w].push(make_pair(k, v));
}


void check(pII &m, string var) {
  cout << "\t" << var << " contiene:\n";
  cout << "first " << m.first << " second " << m.second << endl;
}

int dfs(int source, vector < priority_queue< pII , vector < pII >, greater< pII > > > adj) {
  // priority_queue< pII , vector < pII >, greater< pII > > aux = g.adj;
  // priority_queue< pII , vector < pII >, greater< pII > > *aux;
  // memcpy(aux, g.adj, g.vertices);
  bool flag = false;
  pII s = make_pair(0, source);
  pII curr = make_pair(-1, -1);

  while (!adj[s.second].empty()) {
      flag = false;
      // check(s, "s");

      curr = adj[s.second].top();
      adj[s.second].pop();

      while (curr.first <= s.first) {
        flag = true;
        if (adj[s.second].size() == 1) {
          pII aja = adj[s.second].top(); adj[s.second].pop();
          if (aja.first > s.first) {
            curr = aja;
          } else {
            curr = s;
          }
          break;
        }

        curr = adj[s.second].top(); adj[s.second].pop();

        // check(curr, "curr");
      }

      // if(!flag) cout << "no entro loop 2" << endl;
      // if(!flag) check(curr, "curr");

      if (curr.first > s.first) s = curr;
      if (adj[s.second].size() == 1) {
        curr = adj[s.second].top(); adj[s.second].pop();
        if (curr.first > s.first) {
          s = curr;
        }
        break;
      }
  }

  return s.second;
}

void Graph::show() {
  pII aux;
  for (int i = 0; i < vertices; i++) {
    cout << "hijos vertice " << i << ":\n";
    for (int it = 0; it <= adj[i].size(); ++it) {
      aux = adj[i].top();
      adj[i].pop();
      cout << "nodo: " << aux.second << " dist: " << aux.first << endl;
    }
  }
}

int main() {
  fast;
  int cases, dudes, links, x, k;
  cin >> cases;
  while(cases--) {
    cin >> dudes >> links >> len;
    vector < priority_queue< pII , vector < pII >, greater< pII > > > a(dudes);
    Graph g(dudes, a);

    while(links--) {
      cin >> x >> k;
      g.add_edge(x, x+1, k);
    }
    for (int i = 0; i < dudes; ++i) {
      cout << dfs(i, g.adj) << endl;
    }
  }
  return 0;
}
