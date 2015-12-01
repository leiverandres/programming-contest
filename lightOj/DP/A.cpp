#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
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
			if(field[j][h] != 0){
				alp = false;
				break;
			}
		}
		if (alp){
			for (int k = 0; k < n; ++k)
			{
				if(field[k][v] != 0){
					alp = false;
					break;
				}
			}
		}else{
			field[h][v] = 1;
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