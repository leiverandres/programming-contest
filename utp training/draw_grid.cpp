#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void draw_line(int t) {
  for (int i = 0; i < t; i++) {
    for (int j = 0; j < 21; j++) {
      cout << "*";
    }
    endl;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int s, t, n;
  do {
    cin >> s >> t >> n;

  } while (s and t and n);

  return 0;
}
