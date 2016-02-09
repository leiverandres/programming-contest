#include <bits/stdc++.h>

using namespace std;

string to_str(int a) {
  std::stringstream ss;
  ss << a;
  return ss.str();
}

int to_int(string s) {
  istringstream buffer(s);
  int value;
  buffer >> value;;
  return value;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string a, b;
  string ans = "";
  cin >> a >> b;
  for (int i = 0; i < a.size(); i++) {
    ans += to_str(abs((a[i]-'0') - (b[i]-'0')));
  }
  cout << to_int(ans) << endl;
  return 0;
}
