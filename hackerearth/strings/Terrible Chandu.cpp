#include <bits/stdc++.h>
//reversing a string
using namespace std;

int main()
{
	int cases; cin>>cases;
	for (int caso = 0; caso < cases; ++caso)
	{
		string s; cin>>s;
		reverse(s.begin(), s.end());
		cout<<s<<endl;
	}
}