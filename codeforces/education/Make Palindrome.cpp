#include <bits/stdc++.h>

using namespace std;

int main() {
  string s, ans;
  int frec[26];
  cin>>s;
  for (int i = 0; i < s.size(); ++i) {
    frec[s[i] - 'a']++;
  }

  return 0;
}
