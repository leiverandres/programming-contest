#include <bits/stdc++.h>
//uva problem
using namespace std;

int cont;
typedef unsigned long datatype;
datatype memo[62][62];

datatype trib(int n, int back) {
  cont++;
  if(n<=1) return 1;
  if (memo[n][back] != -1) return memo[n][back];
  memo[n][back] = 1;

  for(int i = 1;i <= back; i++)
    memo[n][back] += trib(n-i,back);

  return memo[n][back];

}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int caso = 1, n, back;
  memset(memo, -1, sizeof(memo));
  while ((cin >> n >> back) and (n <= 60)) {
    cont = 0;
    datatype ans = trib(n, back);
    cout << "Case " << caso++ << ": " << ans << endl;
  }
}
