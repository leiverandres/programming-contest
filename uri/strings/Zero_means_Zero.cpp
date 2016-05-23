#include <bits/stdc++.h>

using namespace std;

string to_str(int a) {
  stringstream ss;
  ss << a;
  return ss.str();
}

string delete_zeros(string &str) {
  str.erase(remove(str.begin(), str.end(), '0'), str.end());
  return str;
}

int main() {
  int n, m;
  while (cin >> n >> m && n+m) {
    int sum = n+m;
    string s = to_str(sum);
    s = delete_zeros(s);
    cout << s << endl;
  }
  return 0;
}
