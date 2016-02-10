#include <bits/stdc++.h>
using namespace std;
//no solved yet
int to_int(string c) {
  return atoi(c.c_str());
}

bool is_letter(string c) {
  return c >= "a" and c <="z";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  map<string, int> values;
  int num;
  string trash, first, op, aux1, aux2;
  while (cin >> first) {
    cin >> trash >> aux1;
    // cout << "got here\n";
    if (!is_letter(aux1)) {
      num = to_int(aux1);
      values[first] = num;
      // cout << "hi" << endl;
    } else {
      cin >> op >> aux2;
      values[first] = values[aux1] + values[aux2];
    }

  }
  cout << values[first] << endl;

  return 0;
}
