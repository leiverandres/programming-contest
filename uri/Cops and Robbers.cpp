#include <bits/stdc++.h>

using namespace std;
int field[5][5];
int posx[4] = {0,  0, -1, 1};
int posy[4] = {1, -1,  0, 0};

bool dfs(int x, int y) {
  bool visited[5][5];
  memset(visited, false, sizeof(visited));
  queue< pair<int, int> > q;
  q.push(make_pair(x, y));
  visited[x][y] = true;

  while (!q.empty()) {
    pair<int, int> cur = q.front();
    q.pop();
    if (cur.first == 4 and cur.second == 4) {
      return true;
    }

    for (int i = 0; i < 4; i++) {
      int n_x = cur.first + posx[i];
      int n_y = cur.second + posy[i];
      pair<int, int> aux = make_pair(n_x, n_y);
      if (!visited[n_x][n_y] and !field[n_x][n_y] and n_x < 5 and n_x >= 0 and n_y >= 0 and n_y < 5) {
        visited[n_x][n_y] = true;
        q.push(make_pair(n_x, n_y));
      }
    }
  }
  return false;
}


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
        cin >> field[i][j];
      }
    }

    if (dfs(0,0)) {
      cout << "COPS" << endl;
    } else {
      cout << "ROBBERS" << endl;
    }
  }
  return 0;
}
