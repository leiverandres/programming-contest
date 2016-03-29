#include <bits/stdc++.h>
#define D(x) cout << #x " = " << x << endl

using namespace std;

bool is_one(string t) {
  return (t[0] == 'o' and t[1] == 'n') or
         (t[1] == 'n' and t[2] == 'e') or
         (t[0] == 'o' and t[2] == 'e');
}

int main() {
  int n;
  string word;
  cin >> n;

  while (n--) {
    cin >> word;
    if (word.size() > 3 ) {
      cout << 3 << endl;
    } else if (is_one(word)) {
      cout << 1 << endl;
    } else {
      cout << 2 << endl;
    }
  }
  return 0;
}
