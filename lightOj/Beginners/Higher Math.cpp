#include <bits/stdc++.h>

using namespace std;

int main()
{
	int cases;
	cin>>cases;
	
	for (int caso = 0; caso < cases; ++caso)
	{
		long a, b, c;
		vector <long> numbers(3);
		cin>>numbers[0]>>numbers[1]>>numbers[2];
		sort(numbers.begin(), numbers.end());

		cout<<"Case "<<caso+1<<": ";
		((numbers[0]*numbers[0]) + (numbers[1]*numbers[1]) == (numbers[2]*numbers[2])) ? cout<<"yes"<<endl : cout<<"no"<<endl;
	}
	return 0;
}