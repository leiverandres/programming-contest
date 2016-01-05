#include <bits/stdc++.h>
//https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1620
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define npos string::npos
using namespace std;

int KMP_matcher(string &pattern, string &text) {
	int m = pattern.size();
	vector<int> border(m);
	border[0] = 0;
	for (int i = 1; i < m; ++i)
	{
		border[i] = border[i-1];
		while (border[i] > 0 && pattern[i] != pattern[border[i]]) {
			border[i] = border[border[i] - 1];
		}
		if(pattern[i] == pattern[border[i]]) border[i]++;
	}

	int n = text.size();
	bool flag = false;
	int seen = 0;
	for (int j = 0; j < n; ++j) {
		while (seen > 0 && text[j] != pattern[seen])	{
			seen = border[seen - 1];
		}
		if (text[j] == pattern[seen]) seen++;
		if (seen == m) {
			flag = true;
			seen = border[m - 1];
      break;
		}
	}

	return flag;
}

int main() {
  int cases, q;
  string s, query;
  cin >> cases;
  for (int i = 0; i < cases; ++i) {
    cin >> s >> q;
    while (q--) {
      cin >> query;
      if(KMP_matcher(query, s)) {
        cout << "y" << endl;
      } else {
        cout << "n" << endl;
      }
    }
  }
  return 0;
}
