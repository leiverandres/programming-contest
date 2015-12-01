#include <bits/stdc++.h>

using namespace std;

const double PI = 2 * acos(0.0);
const double err = 1.0e-9;

int main()
{
	int cases;
	cin>>cases;
	cout << fixed; cout.precision(2);
	for (int caso = 0; caso < cases; ++caso)
	{
		double radio; cin>>radio;
		double ans = (4*(radio * radio)) - (PI*(radio * radio));
		cout<<"Case "<<caso+1<<": "<< ans + err<<endl;
	}
	return 0;
}