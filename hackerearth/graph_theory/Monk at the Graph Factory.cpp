#include <bits/stdc++.h>
/*
  problem: https://www.hackerearth.com/problem/algorithm/monk-at-the-graph-factory/
  The solution of this problem is based in the fact that
  2 * Sum(degrees) = total_edges is a tree
  also n-1 = edges where n=Nodes of the graph
  a degree is
*/
using namespace std;

int main() {
  int n, aux, sum = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> aux;
    sum += aux;
  }

  cout << (( (2*(n-1)) == sum )? "Yes":"No") << endl;
}
