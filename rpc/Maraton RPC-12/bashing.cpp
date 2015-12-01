#include <bits/stdc++.h>
#define oo 1000000

using namespace std;


int memo[17][3603];
int cant[17][3603];
int n,t;

int DP(int index, int time1, int *times){
	if(index >= n)return 0;
	if(time1 >= t){
		cant[index][time1] += 1;
		return time1-t;
	}
	if(memo[index][time1] != -1) return memo[index][time1];
	int tmp1 = oo, tmp2 = oo, ans = oo;
	tmp1 = DP(index, time1 + times[index], times);
	tmp2 = DP(index+1, time1, times);
	ans = min(tmp1, tmp2);

	return memo[index][time1] = ans;
}

int main(){
	int nc;
	cin>>nc;
	while(nc--){
		cin>>n>>t;
		int times[n];
		for(int i=0; i<n; i++)cin>>times[n];
		cout<<DP(0,0, times)<<endl;
	}
	return 0;
}