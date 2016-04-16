#include <bits/stdc++.h>

using namespace std;

vector<int> split(string s) {
  vector<int> target(26);
  target[(int(s[0]) & 31) - 1]++;
  for (int i = 1; i < s.size(); ++i) {
    if (s[i] == ' ') {
      int c = (s[i+1] & 31) - 1;
      target[c]++;
    }
  }
  return target;
}

int main() {
  string authors, algorithm;
  while (getline(cin, authors)) {
    vector<int> au(26), al(26);
    getline(cin, algorithm);
    au = split(authors);
    al = split(algorithm);

    string target = "yes";
    for (int i = 0; i < 26; ++i) {
      target = (au[i] != al[i])? "no" : target;
    }
    cout<<target<<endl;
  }
}
