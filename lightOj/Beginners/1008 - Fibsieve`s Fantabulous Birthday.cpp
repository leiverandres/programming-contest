#include <bits/stdc++.h>

using namespace std;

int main() {
	long cases, n;
	cin>>cases;
	for(int caso = 0; caso < cases; ++caso) { 
	 	cin>>n;
	 	long x, y;
	 	x = ceil(sqrt(n));
	 	y = (( (x*x) + ( (x-1)*(x-1) ) + 1) / 2L) - n;
	 	if (x % 2 == 1) {
	 		if (y < 0) {
	 			y = x + y;
	 			swap(x, y);
	 		} else {
	 			y = x - y;
	 		}
	 	} else {
	 		if (y < 0) {
	 			y = x + y;
	 		} else {
	 			y = x - y;
	 			swap(x, y);
	 		}
	 	}
		cout<<"Case " << caso+1 << ": " << x << " " << y << endl;
	} 
	
	return 0;
}