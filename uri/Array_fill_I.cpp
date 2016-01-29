#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  for (int i = 0; i < 10; i++) {
    cout << "N[" << i << "] = " << n << endl;
    n *= 2;
  }
  return 0;
}
