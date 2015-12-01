#include <bits/stdc++.h>
#include <string>
#include <sstream>
#include <algorithm>
#include <iostream>
using namespace std;

int toInt(string s)
{
	stringstream cad;
	int r;
	cad << s;
	cad >> r;
	return r;
}

void formating(string &str)
{
	str.erase(remove_if(str.begin(), str.end(), ::isspace), str.end());
	for (int i = 0; i < str.size(); ++i)
	{
		str[i] = tolower(str[i]);	
	}
	sort(str.begin(), str.end());
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	string x, y, n;
	int cases; 
	getline(cin, n);
	cases = toInt(n);
	for (int caso = 0; caso < cases; ++caso)
	{
		getline(cin, x);
		getline(cin, y);
		formating(x);
		formating(y);
		cout<<"Case "<<caso+1<<": ";
		(x == y)? cout<<"Yes\n": cout<<"No\n";
	}
	return 0;
}