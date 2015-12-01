#include <bits/stdc++.h>

using namespace std;

double ev[5005];

double solution(int pos_limit){
  	for (int i = pos_limit-1; i >= 0; --i){
  		ev[i] = 1;
  		for (int j = 1; j <= min(pos_limit - i, 10); ++j){
  				ev[i] += (ev[i+j])*(1.0/min(pos_limit - i, 10));
  		}
  	}

  	return ev[0];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int cases; cin>>cases;
	for (int caso = 0; caso < cases; ++caso)
	{
		memset(ev, 0, sizeof(ev));
		int a; cin>>a;
		double ans = solution(a);
		cout<<fixed<<setprecision(10)<<ans<<endl;
	}
	return 0;
}