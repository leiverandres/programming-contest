/*
  https://www.urionlinejudge.com.br/judge/es/problems/view/1527
  dsu problem
*/

#include <bits/stdc++.h>
#define N 100002

using namespace std;

int p[N];
int points[N];

void initialize(int n) {
  for (int i = 0; i < n; i++) {
    p[i] = i;
    cin >> points[i];
  }
}

int find_set(int x) {
  return ((p[x] == x)? x : p[x] = find_set(p[x]));
}

void union_sets(bool op, int a, int b, int &ans) {
  int a_root = find_set(a);
  int b_root = find_set(b);

  if (op) {
    /*
    *  Regular union
    */
    if (a_root == b_root)
      return;
    p[b_root] = a_root;
    points[a_root] += points[b_root];
  } else {
    /*
    *  battle, no union
    */
    if (points[a_root] > points[b_root] and a_root == find_set(0)) {
      ans++;
    } else if (points[b_root] > points[a_root] and b_root == find_set(0)) {
      // rafael wins, and ties doesn't count
      ans++;
    }
  }
}


int main() {
  int n, m, action, a, b;
  while ((cin >> n >> m) and (n+m)) {
    int ans = 0;
    initialize(n);
    while (m--) {
      cin >> action >> a >> b;
      union_sets(action%2, a-1, b-1, ans);
    }
    cout << ans << endl;
  }
  return 0;
}
