#include <bits/stdc++.h>

using namespace std;

int main () {
  string s;
  int q, begin, end, rep;
  cin >> s >> q;
  while (q--) {
    cin >> begin >> end >> rep;
    rep = rep % (end - begin + 1);
    if (s.size() > 1) {
      string aux = s.substr(begin-1, end-begin+1);
      string endi = s.substr(end);
      string rot = aux.substr(aux.size() - rep) + aux.substr(0, aux.size() - rep) + endi;
      s = s.substr(0, begin-1) + rot;
    }
  }
  cout << s << endl;
  return 0;
}
