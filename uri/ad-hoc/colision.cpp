#include <bits/stdc++.h>

using namespace std;

/*
* D--------C
* |        |
* |        |
* |        |
* A--------B
*/

int main() {
  int ax, ay,
      bx, by,
      cx, cy,
      dx, dy,
      rx, ry,
      tc;

  cin >> tc;

  while (tc--) {
    bool flag = false;
    cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy >> rx >> ry;

    if (rx >= ax and rx >= dx and rx <= cx and rx <= bx)
      if (ry >= ay and ry >= by and ry <= dy and ry <= cy)
        flag = true;

    cout << flag << endl;
  }

  return 0;
}
