#include <bits/stdc++.h>

using namespace std;

int main()
{
	int cases; cin>> cases;
	for (int caso = 0; caso < cases; ++caso)
	{
		int posMan, liftPos; cin>>posMan>>liftPos;
		int ans;

		ans = 4*(abs(liftPos - posMan) + posMan) + 6 + 3 + 10;//6: 3times for 2 opens; 3times for 1 close; 5times for 1 in plus 5 for 1 out

		cout<<"Case "<<caso+1<<": "<<ans<<endl;
	}
	return 0;
}