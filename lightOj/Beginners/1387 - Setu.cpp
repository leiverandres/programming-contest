#include <bits/stdc++.h>

using namespace std;

int main()
{
	int cases; cin>>cases;
	for (int caso = 0; caso < cases; ++caso)
	{
		int n, acum = 0; cin>>n;

		cout<<"Case "<<caso+1<<":"<<endl;
		for (int i = 0; i < n; ++i)
		{
			string cad;
			int aux;
			cin>>cad;
			if(cad == "report"){
				cout<<acum<<endl;
				continue;
			}else {
				cin>>aux;
				acum += aux;
			}
		}
	}

	return 0;
}