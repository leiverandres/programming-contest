
/*
https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=216
*/

#include <bits/stdc++.h>
#define N 101

using namespace std;

vector< vector<int> > graph;
vector <bool> visited;
	
void dfs(int start)
{
	stack<int> s;
	bool first = true;
	int current = 0;
	s.push(start);

	while(!s.empty())
	{
		current = s.top();
		s.pop();
		visited[current] = true;
		//no puedo marcar el primer nodo, solo si vuelvo a el con algun ciclo
		if (current == start and first){
			visited[current] = false;
			first = false;
		} 

		for (int w = 0; w < graph[current].size(); w++)
		{
			int tmp = graph[current][w];
			if(!visited[tmp]) s.push(tmp);
		}
	}
}

void print(){
	int n = 0;
	vector <int> output;

	for (int i = 0; i < visited.size(); ++i)
	{
		if(!visited[i]){
			n++;
			output.push_back(i+1);
		}
	}
	if (n == 0) cout<<"0\n";
	else cout<<n<<" ";

	for (int i = 0; i < output.size(); ++i)
	{
		if(i == output.size()-1)cout<<output[i]<<endl;
		else cout<<output[i]<<" ";
	}

}

int main(int argc, char const *argv[])
{
	int edges = 0;
	int node = 0, edge = 0, n = 0;
	int m = 0;

	while(cin>>edges){
		if (edges == 0) break;
		
		graph.clear();
		graph.resize(edges);

		while (cin>>node)
		{	
			if(node == 0) break;

			while(cin>>edge)
			{
				if(edge == 0) break;

				graph[node-1].push_back(edge-1);//index cero
			}
		}

		cin>>n;

		for (int i = 0; i < n; i++)
		{
			visited.assign(edges, false);

			cin>>m;
			dfs(m-1);
			print();
		}
	}
	return 0;
}