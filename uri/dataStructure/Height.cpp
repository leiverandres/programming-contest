#include <bits/stdc++.h>
#define fast_in ios_base::sync_with_stdio(false); cin.tie(NULL)

using namespace std;

int main() {
  fast_in;
  int nc, n;
  vector<int> v(3000001);
  cin >> nc;
  while (nc--) {
    cin >> n;
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }

    sort(v.begin(), v.begin() + n);

    for (int i = 0; i < n; i++) {
      cout << v[i] << ((i == (n-1))? "": " ");
    }
    cout << endl;
  }
  return 0;
}
