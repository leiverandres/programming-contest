#include <bits/stdc++.h>

using namespace std;

int main() {
  int tc, power;
  string name;
  cin >> tc;
  while (tc--) {
    cin >> name >> power;
    if (name == "Thor") {
      cout << "Y" << endl;
    } else {
      cout << "N" << endl;
    }
  }
  return 0;
}
