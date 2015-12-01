#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	int test = 1;
	cin>>n>>m;
	while(m+n)
	{
		//char field[n][m];
		int dx[8] = {0, 0, 1, -1, -1, 1, -1, 1};
		int dy[8] = {1, -1, 1, 1, -1, -1, 0, 0};
		char tmp;
		int ans[n][m];
		memset(ans, 0, sizeof(ans));
		for (int i = 0; i < n; ++i){
			for (int j = 0; j < m; ++j){
				cin>>tmp;
				if (tmp  == '*')
				{
					ans[i][j] = -1;
				}
			}
		}

		for (int i = 0; i < n; ++i){
			for (int j = 0; j < m; ++j){
				if(ans[i][j] == -1){
					for (int k = 0; k < 8; ++k)
					{
						int px = j + dx[k];
						int py = i + dy[k];
						if (px >= 0 && px < m && py >= 0 && py < n && ans[py][px] != -1)
						{
							ans[py][px] +=1;
						}

					}
				}
			}
		}
		cout<<"Field #"<<test<<":"<<endl;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				if(ans[i][j] == -1){
					cout<<"*";
				}else {
					cout<<ans[i][j];
				}
			}
			cout<<endl;
		}

		cin>>n>>m;
		if(n){
			cout<<endl;	
		}
		test++;
	}

	return 0;
}