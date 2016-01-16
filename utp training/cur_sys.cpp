#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)

using namespace std;
//http://codeforces.com/problemset/problem/560/A
int main() {
  fast;
  int n, aux;
  bool flag = false;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> aux;
    if (aux == 1) {
      flag = true;
      break;
    }
  }

  cout << ((flag)? "-1" : "1") << endl;

  return 0;
}
