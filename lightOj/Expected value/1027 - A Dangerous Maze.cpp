#include <bits/stdc++.h>
//reversing a string
using namespace std;

int main()
{
	int cases; cin>>cases;
	for (int caso = 0; caso < cases; ++caso)
	{
		int n, count = 0, tmp, sum = 0;
		cin>>n;
		for (int i = 0; i < n; ++i)
		{
			cin>>tmp;
			sum += abs(tmp);
			if(tmp < 0) count++;
		}

		cout<<"Case "<<caso+1<<": ";
		int gcd = __gcd(sum, n - count);
		(n - count)? cout<<(sum/gcd)<<"/"<<(n-count)/gcd<<endl : cout<<"inf\n";
	}
}