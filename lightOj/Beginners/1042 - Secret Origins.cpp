#include <bits/stdc++.h>
#define NMAX 1e9
//the problem here is to find a number greater than N wich has same set bits than N
//http://lightoj.com/volume_showproblem.php?problem=1042
using namespace std;

vector <int> binary;

//binary of 32 bits
void to_binary(unsigned int val)
{
	unsigned int mask = 1<<(sizeof(int) * 8 -1);

	for(int i = 0; i < sizeof(int) * 8; ++i)
	{
		if((val & mask) == 0)
			binary.push_back(0);
		else 
			binary.push_back(1);
		mask >>=1;
	}
}

int main()
{
	int cases; cin>>cases;
	for (int caso = 0; caso < cases; ++caso)
	{
		binary.clear();
		long long number, ans = 0;
		cin>>number;
		to_binary(number);
		next_permutation(binary.begin(), binary.end());
		//to decimal again
		int pos = 0;
		for (int i = binary.size() - 1; i >= 0; --i)
		{
			if(binary[i])
				ans |= (1LL << pos);
			pos++;
		}

		cout<<"Case "<<caso+1<<": "<<ans<<endl;;
	}
}