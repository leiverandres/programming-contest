#include <bits/stdc++.h>

using namespace std;

int next_int() {
  string buffer;
  getline(cin, buffer);
  return atoi(buffer.c_str());
}

bool is_letter(char c) {
  return (c >= 'a' and c <= 'z') or (c >= 'A' and c <= 'Z');
}

int main() {
  string line;
  int n = next_int();
  while (n--) {
    vector<int> frec(27, 0);
    int max = -1;

    getline(cin, line);

    for (int i = 0; i < line.size(); i++) {
      if (is_letter(line[i])) {
        frec[tolower(line[i]) - 97] += 1;
        if (frec[tolower(line[i]) - 97] > max) {
          max = frec[tolower(line[i]) - 97];
        }
      }
    }

    for (int i = 0; i < frec.size(); i++) {
      if (frec[i] == max) {
        cout << (char)(i + 97);
      }
    }

    cout << endl;
  }


  return 0;
}
