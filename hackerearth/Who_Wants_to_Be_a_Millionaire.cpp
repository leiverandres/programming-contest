#include <bits/stdc++.h>
using namespace std;
//https://www.hackerearth.com/problem/algorithm/who-wants-to-be-a-millionaire-7/|
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout << fixed; cout.precision(6);
  int t;
  double n;
  cin >> t;
  while (t--) {
    cin >> n;
    cout << ((n-1)/n) << endl;
  }
}
