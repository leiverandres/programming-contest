#include <bits/stdc++.h>
//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=979
using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		vector <int> dif;
		int numbers[n], aux;
		bool jolly = true;
		for (int i = 0; i < n; ++i)
			cin>>numbers[i];
		
		for (int i = 0; i < n-1; ++i)
		{
			aux = abs(numbers[i+1] - numbers[i]);
			dif.push_back(aux);
		}

		sort(dif.begin(), dif.end());

		for (int i = 0; i < n-1; ++i)
		{
			if(dif[i] != i+1)
			{
				jolly = false;
				break;
			}
		}	

		(jolly)? cout<<"Jolly\n" : cout<<"Not jolly\n";
	}
}