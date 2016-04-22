#include <bits/stdc++.h>

using namespace std;

int main() {
  int dur;
  cin >> dur;
  cout << dur / 3600 << ":";
  dur %= 3600;
  cout << (dur/60) << ":";
  dur %= 60;
  cout << dur << endl;

  return 0;
}
