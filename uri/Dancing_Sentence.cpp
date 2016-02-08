#include <bits/stdc++.h>
using namespace std;

int main() {
  string line;
  while (getline(cin, line)) {
    bool state = false;
    int init = 0;
    while (line[init] == ' ') {
      init++;
    }
    line[init] = toupper(line[init]);
    for (int i = init+1; i < line.size(); i++) {
      if (line[i] != ' ') {
        if (state) {
          line[i] = toupper(line[i]);
        } else {
          line[i] = tolower(line[i]);
        }
        state = !state;
      }
    }
    cout << line << endl;
  }
  return 0;
}
