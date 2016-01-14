#include <bits/stdc++.h>
//https://www.hackerearth.com/problem/algorithm/its-all-about-magic/?utm_campaign=user-activity-email&amp;utm_medium=email&amp;utm_source=user-recommend-problemdescription/
using namespace std;

int const N = 91;
vector<long long unsigned> ans_zeros(N, -1);
vector<long long unsigned> ans_ones(N, -1);

void calculate() {
  ans_zeros[0] = 0;
  ans_ones[0] = 1;
  for (int i = 1; i < N; ++i) {
    ans_ones[i] = ans_zeros[i - 1];
    ans_zeros[i] = ans_ones[i - 1] + ans_zeros[i - 1];
  }
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  calculate();
  int t, m;
  cin >> t;
  while (t--) {
    cin >> m;
    cout << ans_ones[m] << " "<< ans_zeros[m] << endl;
  }
}
