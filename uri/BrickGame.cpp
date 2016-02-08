#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, t;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    cin >> n;
    vector<int> vec(n);
    for (int j = 0; j < n; j++) {
      cin >> vec[j];
    }

    sort(vec.begin(), vec.end());
    cout << "Case " << i << ": " << vec[floor(n/2)] << endl;
  }


  return 0;
}
