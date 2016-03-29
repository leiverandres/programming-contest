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
  int n;
  string line;
  n = next_int();
  while (n--) {
    getline(cin, line);
    
    for (int i = 0; i < line.size(); i++) {
      if (is_letter(line[i]))
        line[i] += 3;
    }

    reverse(line.begin(), line.end());
    for (int i = ceil(line.size() / 2); i < line.size(); i++) {
      line[i] -= 1;
    }

    cout << line << endl;
  }
  return 0;
}
