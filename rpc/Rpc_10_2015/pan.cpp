#include <bits/stdc++.h>

using namespace std;

string toStr(int x){
	stringstream s;
	s << x;
	return s.str();
}

int toInt(string x){
	stringstream s;
	s << x;
	int r;
	s >> r;
	return r;
}

int main(){
	long long ans = 0;
	vector<long long> impares(500005);
	for(int i=0; i<impares.size(); i++){
		impares[i] = 2*i+1;
	}
	for(int i=30000; i<500000; i++){
		ans += impares[i];
	}
	cout<<ans<<endl;
	return 0;
}