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
	int count = 0;
	string a,b;
	cin>>b;
	while(true){
		a = b;
		sort(b.begin(),b.end());
		if(toInt(a)-toInt(b) == 0){
			count++;
			break;
		}
		b = toStr(toInt(a)-toInt(b));
		count++;
	}
	cout<<count<<endl;
	return 0;
}