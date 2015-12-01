#include <bits/stdc++.h>
//http://codeforces.com/problemset/problem/599/B
using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, m;
  bool ambiguous = false, impossible = false;
  cin>>n>>m;
  vector <int> f(n);
  vector <int> b(m);
  vector <int> a(100009);
  map < int, vector<int> > frec;

  //Input -----------------------------------
  for (int i = 0; i < n; ++i) {
    cin>>f[i];
    frec[f[i]].push_back(i + 1);
  }

  for (int j = 0; j < m; ++j) {
    cin>>b[j];
  }
  //Solve-------------------------------------
  for (int i = 0; i < m; ++i) {
    vector <int> &aux = frec[b[i]];
    if (aux.empty()) {
      impossible = true;
      break;
    } else if (aux.size() == 1) {
      a[i] = aux[0];
    } else {
      ambiguous = true;
    }
  }
  //Output -------------------------------------
  if (impossible) {
    cout<<"Impossible"<<endl;
  } else if (ambiguous) {
    cout<<"Ambiguity"<<endl;
  } else {
    cout<<"Possible\n"<<a[0];
    for (int i = 1; i < m; ++i) {
      cout<<" "<<a[i];
    }
    cout<<endl;
  }
  return 0;
}
