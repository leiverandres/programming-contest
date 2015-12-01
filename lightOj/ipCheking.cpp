#include <bits/stdc++.h>
/*http://lightoj.com/volume_showproblem.php?problem=1354
dada una ip en enteros y binario decir si corresponde 

ejemplo:
	input: 
	2
	192.168.0.100
	11000000.10101000.00000000.11001000
	65.254.63.122
	01000001.11111110.00111111.01111010
	output:
	Case 1: No

	Case 2: Yes

*/

using namespace std;

int main() {
	int cases;
	int u,v,w,x,p,q,r,s,i,m,l,t=1;
	char binary[50],decimal[50];

	cin>>cases;
	for (int j = 0; j < cases; j++)
	{
	 	cin>>decimal;
		cin>>binary;

		l=strlen(decimal);

		replace(decimal, decimal+l, '.', ' ');

		sscanf(decimal,"%d %d %d %d",&u,&v,&w,&x);
		l=strlen(binary);
		p=q=r=s=0;
	
		for(m=1,i=l-1; binary[i]!='.'; i--) {
			s+=(binary[i]-48)*m;
			m=2*m;
		}
		for(m=1,i=i-1; binary[i]!='.'; i--) {
			r+=(binary[i]-48)*m;
			m=2*m;
		}
		for(m=1,i=i-1; binary[i]!='.'; i--) {
			q+=(binary[i]-48)*m;
			m=2*m;
		}
		for(m=1,i=i-1; i>=0; i--) {
			p+=(binary[i]-48)*m;
			m=2*m;
		}
		if(u==p && v==q && w==r && x==s)printf("Case %d: Yes\n",j+1);
		else printf("Case %d: No\n",j+1);
	 }
	return 0;
}
