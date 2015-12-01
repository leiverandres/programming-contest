#include <bits/stdc++.h>
//http://lightoj.com/volume_showproblem.php?problem=1045
using namespace std;

double logaritmos[1000002];
void factorials()
{
	for (int i = 1; i <=  1000002; ++i)
	{
		logaritmos[i] = log10(i) + logaritmos[i-1];
	}
}

int main()
{
	factorials();
	int cases; cin>>cases;
	for (int caso = 0; caso < cases; ++caso)
	{
		int number, base, ans = 0;
		cin>>number>>base;
		double temp1 = logaritmos[number];
		double temp2 = log10(base);
		int temp3 = floor(logaritmos[number]/log10(base));
		cout<<"logaritmos[number]: "<<temp1<<endl;
		cout<<"log10(base): "<<temp2<<endl;
		cout<<"floor(logaritmos[number]/log10(base)): "<<temp3<<endl;
		ans = floor(logaritmos[number]/log10(base)) + 1; 
		cout<<"Case "<<caso+1<<": "<<ans<<endl;
	}
}