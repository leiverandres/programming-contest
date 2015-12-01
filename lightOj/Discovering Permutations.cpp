#include <bits/stdc++.h>


using namespace std;

const  double PI = acos(-1);

int main()
{
	int cases;
	cin>>cases;
	
	
	for (int caso = 0; caso < cases; ++caso)
	{
		int n, k; cin>>n>>k;
		char letras[27];
		for (int i = 0; i < n; ++i)
		{
			letras[i]  = 'A'+i;
		}

		cout<<"Case "<<caso+1<<":"<<endl;

		for (int i = 0; i < k; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				cout<<letras[j];
			}
			cout<<endl;
			if(!next_permutation(letras, letras+n))
				break;
		}
	}
	return 0;
}