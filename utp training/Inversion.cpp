#include <bits/stdc++.h>

using namespace std;

vector <bool> vi(10002);

int reverse(int x) {
  int aux, reversed = 0;
  while (x > 0) {
    aux = x % 10;
    x /= 10;
    reversed = (reversed * 10) + aux;
  }
  return reversed;
}

int dfs(int s, int b) {
  unordered_set<int> st;
  queue<pair <int, int> > q;
  q.push(make_pair(s, 0));

  while (!q.empty()) {
    pair<int, int> cur = q.front();
    q.pop();

    if (st.count(cur.first))
      continue;
    else
      st.insert(cur.first);

    if (cur.first == b) {
      return cur.second;
    }

    q.push(make_pair(cur.first + 1, cur.second + 1));
    q.push(make_pair(reverse(cur.first), cur.second + 1));
  }
  return -1;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int k, a, b, ans;
  cin >> k;
  while (k--) {
    cin >> a >> b;
    cout << dfs(a, b) << endl;
  }
}
