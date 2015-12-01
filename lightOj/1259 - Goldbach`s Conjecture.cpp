#include <bits/stdc++.h>
#define LIMIT 10000000

using namespace std;

vector<long> primes;
vector<bool> sieve(LIMIT + 1, false);

void primes_generator()
{
	sieve[0] = sieve[1] = true;

	for (int i = 2; i < LIMIT; ++i)
	{
		if(!sieve[i]) primes.push_back(i);
		for (int j = i+i; j < LIMIT; j+=i)
		{
			sieve[j] = true;
		}
	}
}

int main()
{
	primes_generator();
	int cases; cin>>cases;
	for (int caso = 0; caso < cases; ++caso)
	{
		long times = 0, aux = 0, n;
		cin>>n;
		for (int i = 0;i <primes.size() and primes[i] <= n/2; ++i)
		{
			aux = n - primes[i];
			if(!sieve[aux]) times++; 	
		}
		cout<<"Case "<<caso+1<<": "<<times<<endl; 
	}
	return 0;
}