#include <bits/stdc++.h>

using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string s;
  long long q, l, r, k;
  cin>>s>>q;

  for (int i = 0; i < q; ++i) {
    cin>>l>>r>>k;
    k %= (r - l + 1);
    if (s.size() > 1){
      string aux = s.substr(l-1, r-l+1);
      // string ans = s.substr(0, l-1);
      string end = s.substr(r);
      string rot = aux.substr(aux.size() - k) + aux.substr(0, aux.size() - k) + end;
      s = s.substr(0, l-1) + rot;
    }else {
      s = s;
    }
  }
  cout<<s<<endl;
  return 0;
}
