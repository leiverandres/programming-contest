#include <bits/stdc++.h>
#define MAX 2000;
//http://codeforces.com/contest/583/problem/B
using namespace std;

int main()
{
	int n;//casillas

	cin>>n;

	int lista[n];//forma de la entrada
	int acum = 0;//recolectados
	bool left =true;
	int changes = 0;//cambios hechos

	for (int i = 0; i < n; ++i)
	{
		cin>>lista[i];
	}

	do{
		if(left){
			for (int i = 0; i < n; ++i)
			{
				if(lista[i] <= acum){
					acum++;
					lista[i] = MAX;
				}
			}
			if (acum == n) break;

			changes++;
			left = false;
		}else{
			for (int j = n-1; j >= 0; --j)
			{
				if(lista[j] <= acum){
					acum++;
					lista[j] = MAX;
				}
			}
			if (acum == n) break;
			changes++;
			left = true;
		}
	}while(acum < n);

	cout<<changes;
	return 0;
}