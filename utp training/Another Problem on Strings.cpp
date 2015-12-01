#include <bits/stdc++.h>
#define MAX 1000000
using namespace std;
//
int memo[MAX+8][MAX+8];
string s;

int dp(int i, int j) {
  if (memo[i][j] != -1) return memo[i][j];
  if (i > s.size() || j > s.size() || i > j) return 0;
  if (s[])
    if(count == k){
      int ans = dp(i, j+1) + dp(i+1, j);

  return memo[i][j] = ans;
}

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  // string s;
  long long k;
  cin>>k;
  cin>>s;
  int count = 0, ans;
  int j = 0;
  for (int i = 0; i < s.size(); ++i) {
    if (s[i] == '1'){
      count++;
      if(count == k) {
        ans++;
        j = i;
      }else if ()
    }
  }
  return 0;
}
