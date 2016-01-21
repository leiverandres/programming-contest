#include <bits/stdc++.h>
using namespace std;
//https://www.urionlinejudge.com.br/judge/en/problems/view/1858
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, mini = 100, ans, aux;
  cin >> n;
  vector<int> vec(n);
  for (int i = 0; i < n; i++) {
    cin >> aux;
    if (aux < mini) {
      ans = i;
      mini = aux;
    }
  }

  cout << ans+1 << endl;

  return 0;
}
