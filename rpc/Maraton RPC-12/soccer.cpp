#include <bits/stdc++.h>

using namespace std;


/*if(aux == p){
	cout<<sol[0]<<"-"<<sol[1]<<"-"<<sol[2]<<endl;
}*/

int main(){
	int cases, g ,p;
	cin>>cases;
	for(int k=1; k<=cases; k++){
		int points[] = {3,1,0};
		int sol[3] = {0,0,0};
		int aux = 0;
		cin>>g>>p;
		cout<<"Team #"<<k<<endl;
		cout<<"Games: "<<g<<endl;
		cout<<"Points: "<<p<<endl;
		cout<<"Possible records:"<<endl;

		for(int i=3*g; i>=0; i--){
			for(int j=p; j>=0; j--){
				aux = i*points[0] + j*points[1] + (g-(i+j))*points[2];
				if(aux == p && (i+j+(g-(i+j))) == g && g-(i+j) >= 0){
					cout<<i<<"-"<<j<<"-"<<g-(i+j)<<endl;
				}
			}
			
		}
		
		
		cout<<endl;
	}
	return 0;
}