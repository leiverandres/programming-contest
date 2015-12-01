#include <bits/stdc++.h>

using namespace std;

int main()
{
	int cases; cin>>cases;
	for (int caso = 0; caso < cases; ++caso)
	{
		int money, friends, sum = 0;
		cin>>friends>>money;
		int v[friends];
		for (int i = 0; i < friends; ++i)
		{
			cin>>v[i];
		}

		int ff = 0;
		bool flag = false;
		for (int i = 0; i < friends; ++i)
		{
			sum += v[i];
			while(sum > money){
				sum -= v[ff];
				ff ++;
			}
			if(sum == money){
				flag = true;
				break;
			}
		}
		(flag)? cout<<"YES\n" : cout<<"NO\n";
	}
}