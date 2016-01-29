#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
  fast;
  int a, n;
  long sum = 0;
  cin >> a >> n;

  while (n <= 0) {
    cin >> n;
  }

  for (int i = 0; i < n; i++) {
    sum += a;
    a++;
  }

  cout << sum << endl;
}
