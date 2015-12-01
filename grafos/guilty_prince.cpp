/*
http://lightoj.com/volume_showproblem.php?problem=1012 
guilty prince 
6 9            Case 1: 45
....#.
.....#
......
......
......
......
......
#@...#
.#..#.

la cantidad de '.' que alcazo desde nodo inicial '@'

*/
#include <bits/stdc++.h>
#define N 20
using namespace std;

char maze[N][N];
int visited[N][N];
int dx[4] = {0, 0, 1, -1};
int dy[4] =  {-1, 1, 0, 0};

void bfs(int iInicial, int jInicial, int n, int m, int &cost)
{	
	visited[iInicial][jInicial] = 1;
	int cy = 0, cx = 0;

	for (int i = 0; i < 4; i++)
	{
		cx = iInicial+dx[i];
		cy = jInicial+dy[i];

		if (cx >= 0 && cx < n && cy >= 0 && cy < m && maze[cx][cy] != '#' && !visited[cx][cy])
		{
			cost++;
			bfs(cx, cy, n, m, cost);
		}
	}
}

int main()
{
	int cases, n, m;
	int x = 0, y = 0; 
	cin>>cases;

	for (int k = 0; k < cases; k++)
	{
		cin>>m>>n;
		int cost = 1;

		memset(visited, 0, sizeof(visited));
	
		int vsited[n][m];
		for (int i = 0; i < n; ++i){
			for (int j = 0; j < m; j++){
				cin>>maze[i][j];
			}
		}

		//posicion inicial
		for (int i = 0; i < n; ++i){
			for (int j = 0; j < m; j++){
				if(maze[i][j] == '@'){
					x = i;
					y = j;
					break;
				}
			}
		}

		bfs(x, y, n, m, cost);

		cout<<"Case "<<k+1<<": "<<cost<<endl;
	}
	return 0;
}