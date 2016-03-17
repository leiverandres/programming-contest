#include <bits/stdc++.h>

using namespace std;

int main() {
  int aux, sum = 0;
  for (int i = 0; i < 4; i++) {
    cin >> aux;
    sum += aux;
  }
  cout << (sum - 3) << endl;
}
