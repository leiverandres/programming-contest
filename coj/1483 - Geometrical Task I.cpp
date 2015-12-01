#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  int a, b;
  cin>>s;
  if (s == "rectangle") {
    cin>>a>>b;
    cout<<a*b<<endl;
  }else {
    cin>>a;
    cout<<a*a<<endl;
  }
}
