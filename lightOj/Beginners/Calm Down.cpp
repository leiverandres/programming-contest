#include <bits/stdc++.h>

//http://lightoj.com/volume_showproblem.php?problem=1072

using namespace std;

const  double PI = acos(-1);

int main()
{
	int cases;
	cin>>cases;
	cout<< fixed; cout.precision(10);
	
	for (int caso = 0; caso < cases; ++caso)
	{
		double R, n, ans;
		cin>>R>>n;
		ans = sin(PI/n)*R / (sin(PI/n) + 1);
		cout<<"Case "<<caso+1<<": "<<ans<<endl;
	}

	return 0;
}