#include <bits/stdc++.h>
using namespace std;
//https://www.hackerearth.com/problem/algorithm/final-destination-cakewalk/
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int x = 0, y = 0;
  string route;
  cin >> route;

  for (int i = 0; i < route.size(); i++) {
    if (route[i] == 'L') {
      x--;
    } else if (route[i] == 'R') {
      x++;
    } else if (route[i] == 'U') {
      y++;
    } else {
      y--;
    }
  }

  cout << x << " " << y << endl;

  return 0;
}
