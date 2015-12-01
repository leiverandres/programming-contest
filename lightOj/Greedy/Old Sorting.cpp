#include <bits/stdc++.h>

//http://lightoj.com/volume_showproblem.php?problem=1166

using namespace std;

int main()
{
	string s;
	int cases; cin>>cases;
	int n;
	int aux;
	for (int caso = 1; caso <= cases; ++caso)
	{
		cin>>n;
		int pos[n+1];
		int vec[n+1];
		int cont = 0;
		for (int i = 1; i <= n; ++i)
		{
			cin>>vec[i];
			pos[vec[i]] = i;
		}
		
		for (int i = 1; i <= n; ++i)
		{
			if(i != vec[i]){
				aux = vec[i];
				swap(vec[pos[i]], vec[i]);
				swap(pos[aux], pos[i]);
				cont++;
			}
		}

		cout<<"Case "<<caso<<": "<<cont<<endl;
	}

	return 0;
}