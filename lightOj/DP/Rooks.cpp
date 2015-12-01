#include <bits/stdc++.h>
#define N 35
//http://lightoj.com/volume_showproblem.php?problem=1005
using namespace std;

long long memo[N][N*N];

long long dp(long long i, long long k){
	if(k == 0) return 1;
	if(k > i) return 0;
	if(memo[i][k] != -1) return memo[i][k];
	long long ans = 1;

	ans = i*i*ans*dp(i-1, k-1)/k;
	return memo[i][k] = ans;
}

int main()
{
	int cases;
	cin>>cases;
	memset(memo, -1, sizeof(memo));
	for (int caso = 0; caso < cases; ++caso)
	{
		long long n, k;
		cin>>n>>k;

		cout<<"Case "<<caso+1<<": "<<dp(n, k)<<endl;
	}

	return 0;
}