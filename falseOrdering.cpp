#include <bits/stdc++.h>
#define N 1000
using namespace std;

int divisors(int n){
	int ans = 0;
	for(int i = 1; i <= n; i++){
		if(n%i == 0){
			ans++;
		}
	}
	return ans;
} 

bool comp(pair<int, int> a, pair<int, int> b){
	if(a.first != b.first)return a.first<b.first;
	else return (a.second > b.second );
}

int main()
{
	int tests = 0;
	int n = 0;

	vector<pair<int, int> > v;

	for (int i = 1; i <= N; ++i)
	{
		v.push_back(make_pair(divisors(i), i));	
	}

	sort(v.begin(), v.end(), comp);

	cin>>tests;
	for (int i = 1; i <= tests; i++)
	{
		cin>>n;

		cout<<"Case "<<i<<": "<<v[n-1].second<<endl;
	}

	return 0;
}