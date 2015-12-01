#include <bits/stdc++.h>

using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin>>n;
  long long p[n];
  vector <long long> ans(5, 0);
  vector < pair<long long, int> > prize(5);
  long long sum = 0LL;

  for(int i = 0; i < n; ++i)
    cin>>p[i];


  long long tmp;
  for(int i = 0; i < 5; ++i) {
    cin>>tmp;
    prize[i] = make_pair(tmp, i);
  }

  sort(prize.rbegin(), prize.rend());
  long long rest = 0LL, pos = 0LL;
  for (int i = 0; i < n; ++i) {
    sum += p[i];
    for (int j = 0; j < 5; ++j) {
        pos = sum / prize[j].first;
        sum -= pos*prize[j].first;
        ans[prize[j].second] += pos;
    }
    rest = sum;
  }

  for(int i = 0; i < 5; ++i)
    cout<<ans[i]<<" ";

  cout<<endl<<rest<<endl;

  return 0;
}
