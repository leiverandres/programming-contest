#include <bits/stdc++.h>

using namespace std;


double dist(double ax, double ay, double bx, double by)
{
	double dist = sqrt(((bx - ax) * (bx - ax)) + ((by - ay) * (by - ay)));
	return dist;
}

int main()
{
	int cases; cin>>cases;
	for (int caso = 0; caso < cases; ++caso)
	{
		double ox, oy, ax, ay, bx, by;
		cin>>ox>>oy>>ax>>ay>>bx>>by;
		double A = dist(ax, ay, bx, by);//dsit a and b
		double B = dist(ax, ay, ox, oy);
		double C = dist(bx, by, ox, oy);
		double alpha = acos(((B*B) + (C*C) - (A*A))/(2.0 * B * C));
		double arc = B * alpha;//ratio X angle
		cout<<"Case "<<caso+1<<": "<<fixed<<setprecision(10)<<arc<<endl;
	}

	return 0;
}