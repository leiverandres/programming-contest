#include <bits/stdc++.h>
#define MOD 100000007

using namespace std;

int n, k;
int memo[52][1002];

int dp(int index, int acum, int *values, int *amount)
{
	if(acum == k) return 1;
	if(index == n) return 0;
	if(memo[index][acum] != -1) return memo[index][acum];

	int ans = 0;

	for (int i = 0; i <= amount[index] && (i*values[index] + acum) <= k; ++i)
	{
		ans += dp(index+1, i*values[index] + acum, values, amount);
		ans = ans%MOD;
	}
	return memo[index][acum] = ans;
}

int main()
{
	int cases; cin>>cases;
	for (int caso = 0; caso < cases; ++caso)
	{
		int ans = 0;
		memset(memo, -1, sizeof(memo));
		cin>>n>>k;
		int values[n];
		int amount[n];
		for (int i = 0; i < n; ++i) cin>>values[i];
		for (int i = 0; i < n; ++i) cin>>amount[i];

		ans = dp(0, 0, values, amount);
		
		cout<<"Case "<<caso+1<<": "<<ans<<endl;
	}

	return 0;
}