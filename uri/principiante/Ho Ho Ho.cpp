#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    cout << "Ho" << ((i == n)? '!': ' ');
  }
  cout << endl;

  return 0;
}
