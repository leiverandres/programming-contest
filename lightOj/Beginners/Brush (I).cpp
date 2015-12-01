#include <bits/stdc++.h>

using namespace std;

int main()
{
	int cases;
	cin>>cases;
	for (int caso = 0; caso < cases; ++caso)
	{
		int n, a; cin>>n;
		int ans = 0;
		for (int i = 0; i < n; ++i)
		{
			cin>>a;
			if (a > 0) ans += a;
		}
		
		cout<<"Case "<<caso+1<<": "<<ans<<endl;
	}
	return 0;
}