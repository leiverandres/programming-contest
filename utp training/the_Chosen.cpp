#include <bits/stdc++.h>
using namespace std;
//https://www.urionlinejudge.com.br/judge/es/problems/view/1983
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int student, n, ans;
  double maxi = -1.0, value;
  cin >> n;
  while (n--) {
    cin >> student >> value;
    if (value >= 8 and value > maxi) {
      maxi = value;
      ans = student;
    }
  }

  if (maxi != -1){
    cout << ans << endl;
  } else {
    cout << "Minimum note not reached" << endl;
  }


  return 0;
}
