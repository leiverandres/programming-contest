#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, hap = 0, sad = 0;
  cin >> n;
  vector<char> vec(n);
  for (int i = 0; i < n; i++) {
    cin >> vec[i];
  }
  for (int i = 0; i < n; i++) {
    if (vec[i] == ':' and i > 0 and i < (n-1)) {
      if (vec[i-1] == '(') {
        hap++;
      } else if (vec[i-1] == ')') {
        sad++;
      }

      if (vec[i+1] == '(') {
        sad++;
      } else if (vec[i+1] == ')') {
        hap++;
      }
    }
  }

  if (hap == sad) {
    cout << "BORED" << endl;
  } else if (hap > sad) {
    cout << "HAPPY" << endl;
  } else {
    cout << "SAD" << endl;
  }
  return 0;
}
