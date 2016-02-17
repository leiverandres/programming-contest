#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, x;
  cin >> n;
  vector <int> v(2001);
  while (n--) {
    cin >> x;
    v[x]++;
  }

  for (int i = 0; i < v.size(); i++) {
    if (v[i]) {
      cout << i << " aparece " << v[i] << " vez(es)" << endl;
    }
  }
}
