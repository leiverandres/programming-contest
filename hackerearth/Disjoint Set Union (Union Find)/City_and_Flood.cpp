#include <bits/stdc++.h>
#define N 100002
using namespace std;

int arr[N];
int n;

void init() {
  for (int i = 1; i <= n; i++) {
    arr[i] = i;
  }
}

int find(int x) {
  return ((arr[x] == x)? x: arr[x] = find(arr[x]));
}

void join(int i, int j) {
  int root_i = find(i);
  int root_j = find(j);
  arr[root_j] = arr[root_i];
}

int count_alive() {
  set<int> st;
  for (int i = 1; i <= n; i++) {
    if (st.count(find(i)) == 0) {
      st.insert(arr[i]);
    }
  }
  return st.size();
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int k, i, j;
  cin >> n >> k;
  init();
  while (k--) {
    cin >> i >> j;
    join(i, j);
  }
  cout << count_alive() << endl;
  return 0;
}
