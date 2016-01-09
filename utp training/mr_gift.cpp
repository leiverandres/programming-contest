#include <bits/stdc++.h>
//http://codeforces.com/problemset/problem/505/A
using namespace std;

bool is_valid(string s) {
  string aux = s;
  reverse(aux.begin(), aux.end());
  if (aux == s) {
    return true;
  } else {
    return false;
  }
}

int main() {
  string s;
  bool flag = false;
  cin >> s;

  for (int i = 0; i <= s.size() && !flag; i++) {
    for (char j = 'a'; j <= 'z'; j++) {
      string aux = s;
      aux.insert(aux.begin()+i, j);
      if (is_valid(aux)) {
        s = aux;
        flag = true;
        break;
      }
    }
  }

  (flag)? cout << s << endl: cout << "NA" << endl;
  return 0;
}
