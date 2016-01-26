#include <bits/stdc++.h>

using namespace std;

int main() {
  int in;
  for (int i = 0; i < 10; i++) {
    cin >> in;
    cout << "X[" << i << "] = " << ((in>0)?in:1) << endl;
  }

  return 0;
}
