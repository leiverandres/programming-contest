#include <bits/stdc++.h>
//if there is two same consecutive letters delete one
using namespace std;

int main()
{
	int cases; cin>>cases;
	for (int caso = 0; caso < cases; ++caso)
	{
		string s, s2 = ""; cin>>s;
		s2 = s[0];
		for (int i = 1; i < s.length(); ++i)
		{
			if(s[i] != s[i-1])
				s2 += s[i];
			
		}
		cout<<s2<<endl;
	}
}