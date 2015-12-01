#include <bits/stdc++.h>
//http://codeforces.com/contest/583/problem/A
using namespace std;

int main()
{
	int n, h, v;
	bool alp = true;

	cin>>n;

	int field[n][n];

	memset(field, 0, sizeof(field));
	vector<int> days;
	for (int i = 0; i < n*n; ++i)
	{
		cin>>h>>v;

		for (int j = 0; j < n; ++j)
		{
			if(field[h-1][j] != 0){
				alp = false;
				break;
			}
		}
		for (int k = 0; k < n; ++k)
		{
			if(field[k][v-1] != 0){
				alp = false;		
				break;
			}
		}
		
		if(alp){
			field[h-1][v-1] = 1;
			days.push_back(i+1);
		}
		
		alp = true;
	}

	for (int i = 0; i < days.size(); ++i)
	{
		cout<<days[i]<<" ";
	}


	return 0;
}

