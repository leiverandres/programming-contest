#include <bits/stdc++.h>

using namespace std;


int main()
{
	int k;
	int n;
	int caso = 0;
	while(cin>>n>>k && n+k)
	{
		double a, b; 
		double sum = 0;
		double sizeMax = -1, priceMax = -1;
		double ans;
		vector< pair<double, double> > go(n);

		for (int i = 0; i < n; ++i)
		{
			cin>>a>>b;
			go[i] = make_pair(a,b);
		}

		sort(go.begin(), go.end());

		for (int i = 0; i < k; ++i)
		{
			sum += go[i].first;
			if(go[i].first > sizeMax)
			{
				sizeMax = go[i].first;
				priceMax = go[i].second;
			}else if(go[i].first == sizeMax)
			{
				priceMax = max(priceMax, go[i].second);
			}
		}
		double cost = sum * priceMax/sizeMax;

		for (int i = k; i < n; ++i)
		{
			double tmp = sum - sizeMax;
			tmp += go[i].first;
			tmp *= go[i].second/go[i].first;

			cost = min(cost, tmp);
		}
		

		printf("Case #%d %.6f\n",++caso, cost);
		caso++;
	}
	return 0;
}