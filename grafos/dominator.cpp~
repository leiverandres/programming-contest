#include <bits/stdc++.h>
//uva dominator
using namespace std;

	//racheable from zero
bool visited[100];
int matriz[100][100];//adyacencia
int dominados[100][100];//salida

bool isIn(int num, vector<int> &vect){
	for(int i = 0; i < vect.size(); i++){
		if(vect[i] == num)
			return true;
	}

	return false;
}

void dfs1(vector<int> &vec,int nodo, int n)
{
	visited[nodo] = true;
	vec.push_back(nodo);
	dominados[0][nodo] = 1;//marca a si mismo

	for(int i = 0; i<n; i++){
		if(matriz[nodo][i] == 1 && !visited[i]){
			dominados[0][i] = 1;
			dfs1(vec, i, n);
		}
	}
}

void dfs2(vector<int> &reachable, int node, int prohibido, int n)
{
	visited[node] = 1;
	reachable.push_back(node);

	for (int i = 0; i < n; i++)
	{
		if(matriz[node][i] == 1 && !visited[i] &&  i != prohibido){
			dfs2(reachable, i, prohibido,  n);
		}
	}
}
void renglon(int n){
	cout<<"+";
	for(int i=0; i<2*n-1; i++){
		cout<<"-";
	}
	cout<<"+"<<endl;
}

int main()
{
	int cases = 0, n = 0;
	
	cin>>cases;
	for (int k = 0; k < cases; k++)
	{	
		memset(matriz, -1, sizeof(matriz));
		memset(dominados, 0, sizeof(dominados));
		memset(visited, false, sizeof(visited));

		vector <int> v;
		vector <int> v2;//after outgoing all prohibido edges
		

		cin>>n;
		//lectura matriz abyacencia
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				cin>>matriz[i][j];
			}
		}


		dfs1(v, 0, n);

		for (int j = 1; j < n; ++j)
		{
			v2.clear();
			memset(visited, false, sizeof(visited));

			dfs2(v2, 0, j, n);

			for (int l = 0; l < v.size(); l++)
			{
				if(!isIn(v[l], v2)){
					dominados[j][v[l]] = 1;
				}
			}
		}

		//salida
		cout<<"Case "<<k+1<<":"<<endl;
		renglon(n);
		for (int i = 0; i < n; ++i)
		{
			cout<<"|";
			for (int j = 0; j < n; ++j)
			{
				if(dominados[i][j] == 1){
					cout<<"Y|";
					
				}else{
					cout<<"N|";
					
				}
			}
			cout<<endl;
			renglon(n);
		}
		
	}

	return 0;
}
