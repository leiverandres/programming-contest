#include <bits/stdc++.h>
//https://www.hackerearth.com/problem/algorithm/all-vowels-2/?utm_campaign=user-activity-email&utm_medium=email&utm_source=user-recommend-problem
using namespace std;

bool is_valid(string s) {
  return s.find("a") != string::npos
        && s.find("e") != string::npos
        && s.find("i") != string::npos
        && s.find("o") != string::npos
        && s.find("u") != string::npos;

}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string s;
  int n;
  cin >> n >> s;

  cout << ((is_valid(s))? "YES": "NO") << endl;
}
