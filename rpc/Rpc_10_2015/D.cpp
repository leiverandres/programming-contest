#include <bits/stdc++.h>
//RPC 10 2015
//problema D, directo a la felicidad


using namespace std;

map<int, vector <int> > graph;
vector <bool> visited;

void dfs(int start, vector <bool> &visit, int &nodes, int &edges)
{	
	if (visited[start])
		return;

	visited[start] = true;
	nodes++;
	for (int i = 0; i < graph[start].size(); ++i)
	{
		edges++;
		dfs(graph[start][i], visit, nodes, edges);
	}
}

int main()
{
	int n, edges, rutes, estadios;
	int a, b, ans = 0;
	cin>>n>>edges>>rutes>>estadios;
	for (int i = 0; i < edges; ++i)
	{	
		cin>>a>>b;
		graph[a-1].push_back(b-1);
		graph[b-1].push_back(a-1);
	}

	visited.assign(n, false);

	for (int i = 0; i < visited.size(); ++i)
	{
		if(!visited[i]){
			int nodes = 0, edges = 0;
			dfs(i, visited, nodes, edges);
			edges /= 2;//por lo que es no dirigido esta en doble sentido
			ans += min( (( (nodes * (nodes - 1)) /2) - edges) * rutes, estadios*nodes);
		}
	}
	cout<<ans<<endl;

	return 0;
}