#include <bits/stdc++.h>

using namespace std;

struct edge{
	int to, weight;
	edge() {}
	edge(int t, int w) : to(t), weight(w){}
	bool operator <(const edge &that) const{
		return weight > that.weight;
	}
};

const int inf = 1000001 + 100;

}
void dijkstra(int s, int n)
{
	int distance[NMAX];
	int prev[NMAX];

	for (int i = 0; i < n; ++i)
	{
		distance[i] = inf;//max valor posible
		prev[i] = -1;
	}
	distance[s] = 0;
	priority_queue<edge> q;
	q.push(edge(s, 0)));
	while(!q.empty())
	{
		int node = q.top().to;
		int dist = q.top().weight;
		q.pop();

		if(dist > distance[node]) continue;
		//if(node == objetivo) return dist;

		for (int i = 0; i < graph[node].size(); ++i)
		{
			int to = graph[node][i].to;
			int w_extra = graph[node][i].weight;

			if(dist + w_extra < distance[to])
			{
				distance[to] = dist + w_extra;
				prev[to] = node;
				q.push(edge(to, distance[to]);
			}
		}
	}	
}


int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int cases; cin>>cases;
	for (int caso = 0; caso < cases; ++caso)
	{
		int n, r, u, v, source, dest, ans = 0; 
		cin>>n>>r;
		vector <edge> graph(n);
		for (int i = 0; i < r; ++i)
		{
			cin>>u>>v;
			graph[u] = edge(v, 1);
		}

		cin>>source>>dest;

		dijkstra(source, n);

		cout<<"Case "<<caso+1<<": "<<distance[dest]<<endl;
	}

	return 0;
}