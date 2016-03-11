#include <bits/stdc++.h>
using namespace std;

char museum[1001][1001];
// bool visited[1001][1001];
int dx[4 = {1, -1, 0,  0};
int dy[4] = {0,  0, 1, -1};

void fill_museum(int n, int m) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> museum[i][j];
    }
  }
}

bool check(int x, int y, int n, int m) {
  return (x >= 0 and y >= 0 and y < m and x < n);
}

void dfs(pair<int, int> s, int n, int m, int &ans, bool visited[][1001]) {
  visited[s.first][s.second] = true;

  for (int i = 0; i < 4; i++) {
    int nx = s.first  + dx[i];
    int ny = s.second + dy[i];

    if (check(nx, ny, n, m) and !visited[nx][ny]) {
      if (museum[nx][ny] == '.') {
        visited[nx][ny] = true;
        pair <int, int> neew(nx, ny);
        dfs(neew, n, m, ans, visited);
      } else {
        ans++;
      }
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, m, k, x, y, ans;
  cin >> n >> m >> k;
  int done[n][m];
  memset(done, 0, sizeof(done));
  bool visited[n][1001];
  fill_museum(n, m);
  while (k--) {
    memset(visited, false, sizeof(visited));
    ans = 0;
    cin >> x >> y;
    if (done[x][y] != 0) {
      pair <int, int> s(x-1, y-1);
      dfs(s, n, m, ans, visited);
      done[n][m] = ans;
    } else {
      ans = done[n][m];
    }
    cout << ans << endl;
  }
  return 0;
}
