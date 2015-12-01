#include <bits/stdc++.h>

using namespace std;

int main()
{
	int cases; cin>>cases;
	for (int caso = 0; caso < cases; ++caso)
	{
		int Ax, Ay, Bx, By, Cx, Cy, Dx = 0, Dy = 0, area = 0;
		cin>>Ax>>Ay>>Bx>>By>>Cx>>Cy;
		Dx = Cx - (Bx - Ax);
		Dy = Ay + (Cy - By);
		area = abs(((Bx-Ax)*(Cy-By))-((By-Ay)*(Cx-Bx)));
		cout<<"Case "<<caso+1<<": "<<Dx<<" "<<Dy<<" "<<area<<endl;
	}

	return 0;
}