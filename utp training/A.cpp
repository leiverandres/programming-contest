#include <bits/stdc++.h>
//no solved
using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string s;
  int x = 0, y = 0, ox, oy;
  cin>>ox>>oy;
  cin>>s;
  while() {
    for (int i = 0; i < s.size(); ++i) {
      if (s[i] == 'U') {
        y++;
      }else if (s[i] == 'D') {
        y--;
      }else if (s[i] == 'L') {
        x--;
      }else if (s[i] == 'R'){
        x++;
      }
    }
  }
  if(x == ox && y == oy){
    cout<<"Yes"<<endl;
  }else {
    cout<<"No"<<endl;
  }
  return 0;
}
