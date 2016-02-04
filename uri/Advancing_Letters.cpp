#include <bits/stdc++.h>

using namespace std;

long calculate(string &start, string &end) {
  long ans = 0;
  for (int i = 0; i < start.size(); i++) {
    if (start[i] < end[i]) {
      ans += end[i] - start[i];
    } else if (end[i] < start[i]){
      ans += 26 - abs(start[i] - end[i]);
    }
  }
  return ans;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie();

  int t;
  string a, b;
  cin >> t;
  while (t--) {
    cin >> a >> b;
    cout << calculate(a, b) << endl;
  }
  return 0;
}
