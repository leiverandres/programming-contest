// problem: http://codeforces.com/contest/606/problem/B
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)

using namespace std;

int main() {
  fast;
  int x, y, x0, y0;
  string route;
  cin >> x >> y >> x0 >> y0;
  cin >> route;
  int field[x+5][y+5];
  vector<int> ans(route.size()+1, 0);

  for (int i = 0; i < x; ++i)
    for (int j = 0; j < y; ++j)
      field[i][j] = 0;

  field[--x0][--y0] = ans[0] = 1;

  for (int i = 0; i < route.size()-1; ++i) {
    if (route[i] == 'U' && (x0-1) >= 0) {
      x0--;
    } else if (route[i] == 'D' && (x0+1) < x) {
      x0++;
    } else if (route[i] == 'L' && (y0-1) >= 0) {
      y0--;
    } else if (route[i] == 'R' && (y0+1) < y){
      y0++;
    }

    (field[x0][y0] == 0)? field[x0][y0] = ans[i+1] = 1 : ans[i+1] = 0;
  }

  int aux = 0;
  for (int i = 0; i < route.size(); ++i) {
    cout << ans[i] << " ";
    if (ans[i])
      aux++;
  }
  cout << (x*y) - aux << endl;
  return 0;
}
