#include <bits/stdc++.h>

using namespace std;

int main () {
  long d1, d2, d3, ans = 1e16;
  cin>>d1>>d2>>d3;
  long pos[4];
  pos[0] = d1 + d3 + d2;
  pos[1] = 2 * (d2 + d1);
  pos[2] = 2*(d2 + d3);
  pos[3] = 2*(d1 + d3);
  for (int i = 0; i < 4; i++) {
    ans = min(ans, pos[i]);
  }
  cout<<ans<<endl;
  return 0;
}
