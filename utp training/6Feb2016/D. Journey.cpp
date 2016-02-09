#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int n, m, a, b;
char field[501][501];
bool visited[501][501];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

class Cell{
public:
  int x, y, acum;
  bool town;

  Cell(int x, int y, bool town) {
    this->x = x;
    this->y = y;
    this->town = town;
    acum = 0;
  }
};

bool bfs(int x, int y, bool town) {
  memset(visited, false, sizeof(visited));
  queue< Cell > q;
  Cell init(x, y, town);
  q.push(init);
  visited[x][y] = true;

  while (!q.empty()) {
    Cell cur = q.front();
    q.pop();

    if (cur.x == (m-1) and cur.y == (n-1)) {
      cout << cur.acum << endl;
      return true;
    }

    for (int i = 0; i < 4; i++) {
      int nx = cur.x + dx[i];
      int ny = cur.y + dy[i];
      if (field[nx][ny] != '#' and nx >= 0 and nx < m and ny >= 0 and ny < n and !visited[nx][ny]) {
        Cell nw(nx, ny, !cur.town);
        visited[nx][ny] = true;
        if (cur.town) {
          nw.acum = cur.acum + b;
        } else {
          nw.acum = cur.acum + a;
        }
        q.push(nw);
      }
    }
  }

  return false;
}

int main() {
  fast;
  cin >> n >> m >> a >> b;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> field[i][j];
    }
  }
  if (!bfs(0, 0, true)) {
    cout << "IMPOSSIBLE" << endl;
  }
  return 0;
}
