#include <bits/stdc++.h>

using namespace std;

int memo[205][105];
int n;

int dp(int row, int col, vector <vector <int> > &costos)
{
	if(row < 0 || costos[row].size() <= col || col < 0) return 0;
	if(memo[row][col] != -1) return memo[row][col];

	int ans = dp(row-1, col, costos)  + costos[row][col];

	if(row >= n){
		ans = max(ans, dp(row-1, col+1, costos) + costos[row][col]);
	}else{
		ans = max(ans, dp(row-1, col-1, costos) + costos[row][col]);
	}

	return memo[row][col] = ans;
}

int main()
{
	int cases, cont, a, ans;
	cin>>cases;

	for (int caso = 0; caso < cases; ++caso)
	{
		cin>>n;
		vector <vector <int> > diamond(2*n - 1);
		memset(memo, -1, sizeof(memo));
		cont = 0;
		for (int i = 0; i < (2*n) - 1; ++i)
		{
			vector <int> v;
			if(i <= n-1) cont++;
			else cont--;

			for (int j = 0; j < cont; ++j)
			{
				cin>>a;
				v.push_back(a);

			}
			diamond[i] = v;
		}

		cout<<"Case "<<caso+1<<": "<<dp(2*n - 2, 0, diamond)<<endl;
	}

	return 0;
}