#include <bits/stdc++.h>

using namespace std;

int main () {
  int a, b, caso = 0;
  while ((cin>>a>>b) && a+b) {
    int ans = ceil( sqrt((a*a) + (b*b)));
    cout<<"Caso #" << ++caso <<": "<<ans<<endl;
  }
}
