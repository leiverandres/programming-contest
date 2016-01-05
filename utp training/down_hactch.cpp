#include <bits/stdc++.h>
//http://codeforces.com/problemset/problem/332/A
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, cont = 0;
  cin >> n;
  string s;
  cin >> s;
  for (int i = n; i < s.size(); i += n) {
    if (s[i - 1] == s[i - 2] and s[i -2] == s[i -3])
      cont++;
  }
  cout << cont << endl;
  return 0;
}
