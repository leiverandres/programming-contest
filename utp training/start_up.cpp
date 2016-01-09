#include <bits/stdc++.h>
//http://codeforces.com/problemset/problem/420/A
using namespace std;

bool is_valid(char c) {
  return c == 'A'
         || c == 'H'
         || c == 'I'
         || c == 'M'
         || c == 'O'
         || c == 'T'
         || c == 'U'
         || c == 'V'
         || c == 'W'
         || c == 'X'
         || c == 'Y';
}

int main() {
  string s;
  cin >> s;
  bool flag = true;

  for (int i = 0; i < s.size(); ++i) {
    if(!is_valid(s[i]))
      flag = false;
  }

  string reversed = s;
  reverse(reversed.begin(), reversed.end());

  (flag && reversed == s)? cout << "YES\n" : cout << "NO\n";
  return 0;
}
