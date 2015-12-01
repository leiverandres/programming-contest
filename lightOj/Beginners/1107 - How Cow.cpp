#include <bits/stdc++.h>
#define NMAX 1e9
//http://lightoj.com/volume_showproblem.php?problem=1107
using namespace std;



int main()
{
	int cases; cin>>cases;
	for (int caso = 0; caso < cases; ++caso)
	{
		int x1, y1, x2, y2, m, a, b;
		cin>>x1>>y1>>x2>>y2>>m;
		cout<<"Case "<<caso+1<<":"<<endl;
		for (int i = 0; i < m; ++i)
		{
			cin>>a>>b;
			if(a > x1 && a < x2 && b < y2 && b > y1) cout<<"Yes\n";
			else cout<<"No\n";
		}
	}
}