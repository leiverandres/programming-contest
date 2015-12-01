#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;
int main()
{
	int cases; cin>>cases;
	for (int caso = 0; caso < cases; ++caso)
	{
		double r1, r2, rm = 0.0,h, p, volum = 0.0;
		cin>>r1>>r2>>h>>p;
		rm = r2 + (r1-r2)*(p/h);
		volum = (PI * p * ((rm * rm) + (r2 * r2) + (rm * r2))) / 3.0;
		cout<<"Case "<<caso+1<<": "<<fixed<<setprecision(10)<<volum<<endl;	
	}
}