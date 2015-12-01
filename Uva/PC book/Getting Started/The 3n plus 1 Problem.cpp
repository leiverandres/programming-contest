#include <bits/stdc++.h>
#define N 1000002
/*
https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=36
100 - The 3n + 1 Problem
la idea es simular el algoritmo que plantea el problema, existen dos casos criticos que hay que contemplar: 
1) Que el numero inicial y final sean iguales
2) que inicial sea mayor que final, en este caso hay que intercambiar limites, pero en la salida se imprimen los originales
*/
using namespace std;

int memo[N];

int fun(int n)
{
	int ans = 1;
	while(n != 1)
	{
		if(n%2 == 0){
			n = n / 2;
			ans++;
		}else{
			n = (3*n) + 1;
			ans++; 
		}
	}
	return ans;
}

int main()
{
	int init, fin;
	while(cin>>init>>fin)
	{
		int max = 0; int tmp = 0;
		int ini = init;//variables sobre las que se trabaja ini y final
		int final = fin;

		if (fin < init){
			ini = fin;
			final = init;
		}

		for (int i = ini; i <= final; ++i)
		{	
			tmp = fun(i);
			memo[i] = tmp;
			if (tmp > max){
				max = tmp;
			}
		}

		cout<<init<<" "<<fin<<" "<<max<<endl;
	}
}