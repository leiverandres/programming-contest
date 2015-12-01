#include <bits/stdc++.h>
//la estrategia es tomar el largo de la cadena y restarle el maximo numero de letras palindromes inicialmente
//lo cual nos da como resultado el nuemro de palabras que hacen falta agregar
//http://lightoj.com/volume_showproblem.php?problem=1033

using namespace std;
int n;
int memo[105][105];
//retorna el maximo de letras palindromes en la caden S
int DP(int i, int j, string &s)
{
	int ans = 0;
	if(memo[i][j] != -1) return memo[i][j];
	if(i > n || j < 0 || i > j) return 0;
	if(i == j) return 1;

	if(s[i] == s[j]){
		ans = max(ans, DP(i+1, j-1, s) + 2);
	}else{
		ans = max(DP(i, j-1, s), DP(i+1, j, s));
	}

	return memo[i][j] = ans;
}

int main()
{
	string s;
	int cases;

	cin>>cases;
	
	for (int caso = 1; caso <= cases; ++caso)
	{
		cin>>s;
		n = s.size();
		memset(memo, -1, sizeof(memo));

		cout<<"Case "<<caso<<": "<<s.size()-DP(0, s.size()-1, s)<<endl;
	}

	return 0;
}