#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int cases; cin>>cases;
	double AB, AC, BC, AD, ratio, ratio2;
	for (int caso = 0; caso < cases; ++caso)
	{
		cin>>AB>>AC>>BC>>ratio;
		ratio2 = ratio/(ratio + 1);
		AD = AB*sqrt(ratio2);
		
		printf("Case %d: %.7lf\n",caso+1, AD);
	}
	return 0;
}