#include <bits/stdc++.h>
#define N 10000000
using namespace std;
//un numero representado por la suma de 4 primos
//https://uva.onlinejudge.org/index.php?option=onlinejud10168 - Summation of Four Primesge&page=show_problem&problem=1109
bool sieve[N];
vector <int> primes;

void criba()
{
	memset(sieve, true, sizeof(sieve));

	sieve[0] = sieve[1] = false;

	for(int i = 2; i <= sqrt(N); i++)
	{
		if(sieve[i])
		{
			for (int j = 2; i*j <= N ; j++)
			{
				sieve[i*j] = false;
			}
		}
	}
}	

void goldbach(int n, int *a, int *b)
{
	if(n == 4)
	{
		*a = 2;
		*b = 2;
		return;
	}

	for (int i = 3; i <= n/2; i += 2)
	{
		cout<<i<<endl;
		if(sieve[i] && sieve[n-i]){
			cout<<"i acepted"<<endl;
			*a = i;
			*b = n-i;

			break;
		}
	}

}

int main()
{
	int n;
	int a = 0, b = 0;
	criba();
	
	while(cin>>n)
	{
		if(n <= 7){
			cout<<"Impossible."<<endl;

		}else if(n%2){
			goldbach(n-5, &a, &b);
			cout<<"2 3 "<<a<<" "<<b<<endl;
		}else{
			goldbach(n-4, &a, &b);
			cout<<"2 2 "<<a<<" "<<b<<endl;
		}
	}	

	return 0;
}