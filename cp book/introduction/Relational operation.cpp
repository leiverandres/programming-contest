#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int cases, x, y;

	cin>>cases;
	for (int i = 0; i < cases; ++i)
	{
		cin>>x>>y;
		if (x > y) cout<<">"<<endl;
		else if(x < y) cout<<"<"<<endl;
		else cout<<"="<<endl;
		
	}

	
	return 0;
}