#include <bits/stdc++.h>
#define N 1e6
using namespace std;

long x, y;
vector <bool> marked(N, false);

int search (vector <long> &vec, int begin, int end, long &key) {
  if (begin > end) {
    return -1;
  }

  int middle = (begin + end) / 2;
  if (vec[middle] >= (key - x) && vec[middle] <= (key + y) && !marked[middle]) {
    return middle;
  } else if (vec[middle] > key){
    return search(vec, begin, middle - 1, key);
  } else {
    return search(vec, middle + 1, end, key);
  }
}

int main () {
  int n, m;
  cin >> n >> m >> x >> y;
  vector <long> sizes(n);
  vector <long> vests(m);
  vector < pair<int, int> > ans;
  for (int i = 0; i < n; ++i) {
    cin >> sizes[i];
  }
  for (int i = 0; i < m; ++i) {
    cin >> vests[i];
  }
  //last is max

  for (int i = 0; i < n; ++i) {
    int aux = search(vests, 0, vests.size(), sizes[i]);
    if (aux != -1 && !marked[aux]) {
      ans.push_back(make_pair(i+1, aux+1));
      marked[aux] = true;
    }
  }
  cout << ans.size() << endl;
  for (int i = 0; i < ans.size(); ++i) {
    cout << ans[i].first << " " << ans[i].second << endl;
  }

  return 0;
}
