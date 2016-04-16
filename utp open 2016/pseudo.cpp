#include <bits/stdc++.h>
#define D(x) cout << #x " = " << x << endl
using namespace std;

int main() {
  int a, c, m, x, x1 = 0;
  while (cin >> a >> c >> m >> x) {
    set<pair <int, int> > num;
    set<pair <int, int> > num2;
    while(true) {
      x1 = (a * x + c) % m;
      pair<int, int> ne = make_pair(x, x1);
      if (num.count(ne) != 0) {
        break;
      } else {
        num.insert(ne);
      }
      x = x1;
    }
    int cc = 0;
    x = (a * x + c) % m;
    while(true) {
      x1 = (a * x + c) % m;
      pair<int, int> ne = make_pair(x, x1);
      if (num2.count(ne) != 0) {
        break;
      } else {
        if (num.count(ne) != 0) {
          cc++;
        }
        num2.insert(ne);
      }
      x = x1;
    }
    if (num.size() == m) {
      cout << "YES " << num.size() << " " << (num.size()-cc) << " " << cc << endl;
    } else {
      cout << "NO " << num.size() << " " << (num.size()-cc) << " " << cc << endl;
    }
  }
  return 0;
}
