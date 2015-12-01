#include <bits/stdc++.h>
//http://lightoj.com/volume_showproblem.php?problem=1047
using namespace std;

int mem[25][4];
int costes[25][3];

int dp(int house, int last_color)
{
	int ans = 20001;
	if(house < 0) return 0;
	if(mem[house][last_color] != -1) return mem[house][last_color];

	for (int i = 0; i < 3; i++)
	{
		if(i != last_color){
			ans = min(ans, dp(house-1, i) + costes[house][i]);
		} 
	}
	mem[house][last_color] = ans;
	return mem[house][last_color];
}

int main(int argc, char const *argv[])
{
	int cases;
	int houses = 0;
	int tmp[3];
	int a, b, c;
	cin>>cases;
	for (int i = 0; i < cases; i++)
	{
		//input
		int ans = 20001;
		cin>>houses;
		memset(mem, -1, sizeof(mem));
		for (int j = 0; j < houses; j++)
		{
			cin>>a>>b>>c;
			costes[j][0] = a;
			costes[j][1] = b;
			costes[j][2] = c;
		}

		ans = dp(houses-1, 4);

		cout<<"Case "<<i+1<<": "<<ans<<endl;
		
	}

	return 0;
}