#include <bits/stdc++.h>

using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin>>n;
  int x[n], y[n];
  int maxX = 0, maxY = -1;
  vector< pair<int, int> > index;

  for(int i = 0; i < n; ++i) {
    cin>>x[i]>>y[i];
    index.push_back(make_pair(y[i], i));
    if(y[i] > maxY){
      maxY = y[i];
    }
    maxX += x[i];
  }
  
  sort(index.rbegin(), index.rend());

  for(int i = 0; i < n; ++i) {
    if(i == index[0].second){
      cout<<index[1].first*(maxX - x[i])<<" ";
    }else{
      cout<<maxY*(maxX - x[i])<<" ";
    }
  }

  cout<<endl;
  return 0;
}
