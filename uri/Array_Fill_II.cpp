#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, it = 0;
  cin >> n;
  for (int i = 0; i < 1000; i++) {
    cout << "N[" << i << "] = " << it << endl;
    it = ((it == (n-1))? 0: it+1);
  }
  return 0;
}
