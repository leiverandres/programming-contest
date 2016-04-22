#include <bits/stdc++.h>

using namespace std;

int main() {
  int dias;
  cin >> dias;
  cout << dias / 365<< " ano(s)" << endl;
  dias %= 365;
  cout << dias / 30 << " mes(es)" << endl;
  cout << dias % 30 << " dia(s)" << endl;
  return 0;
}
