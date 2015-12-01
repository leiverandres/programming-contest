#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int k;
	int n, m;//division point
	while(true){
		cin>>k;
		if(k == 0) break;

		int x = 0;
		int y = 0;
		cin>>n>>m;
		for (int i = 0; i < k; ++i)
		{
			cin>>x>>y;

			if(x == n || y == m){
				cout<<"divisa"<<endl;
			}else if(x > n && y > m){
				cout<<"NE"<<endl;
			}else if(x > n && y < m){
				cout<<"SE"<<endl;
			}else if(x < n && y > m){
				cout<<"NO"<<endl;
			}else{
				cout<<"SO"<<endl;
			}

		}
	}
	
	return 0;
}
 
