#include <bits/stdc++.h>

using namespace std;

bool isUpper(char c) {
  return c >= 'A' and c <= 'Z';
}

int main() {
  int tc;
  string line;
  cin >> tc;
  while (tc--) {
    cin >> line;
    bool same = (line[0] == line[2]);

    if (same) {
      cout << (line[0]-'0')*(line[0]-'0') << endl;
    } else if (isUpper(line[1])) {
      cout << (line[2]-'0')-(line[0]-'0') << endl;
    } else {
      cout << (line[0]-'0')+(line[2]-'0') << endl;
    }

  }

  return 0;
}
