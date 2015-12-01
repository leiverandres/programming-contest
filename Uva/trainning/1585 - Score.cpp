#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	string s;
	for (int k = 0; k < n; ++k)
	{
		int count = 0;
		int ans = 0;
		bool flag = true;
		cin>>s;
		for (int i = 0; i < s.size(); ++i)
		{
			if (s[i] == 'O' && flag) {
				count++;
				ans += count;
			}else if(s[i] == 'O') {
				count = 1;
				ans++;
				flag = true;
			}else {
				count = 0;
				flag = false;
			}
		}

		cout<<ans<<endl;
	}
	return 0;
}