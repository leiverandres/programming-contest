#include <bits/stdc++.h>

using namespace std;

int main()
{
	int cases; cin>>cases;
	for (int caso = 0; caso < cases; ++caso)
	{
		int n; cin>>n;
		vector <long> arr(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}

		sort(arr.rbegin(), arr.rend());

		for (int i = 0; i < n; ++i)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
}