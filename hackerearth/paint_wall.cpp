#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define N (1e5 + 5)

using namespace std;

const long long int MOD = 1e9 + 7;
vector <long long int> ans(N);

void calculate() {
  ans[0] = 3;
  for (int i = 1; i < N; ++i) {
    ans[i] = (ans[i-1]*2) % MOD;
  }
}

int main() {
  fast;
  calculate();
  int cases, n;
  cin >> cases;
  for (int i = 0; i < cases; ++i) {
    cin >> n;
    cout << ans[n-1] << endl;
  }
}
