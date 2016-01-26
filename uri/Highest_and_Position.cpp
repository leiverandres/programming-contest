#include <bits/stdc++.h>

using namespace std;

int main() {
  int aux, id, maxi = -1;
  for (int i = 1; i <= 100; i++) {
    cin >> aux;
    if (aux > maxi) {
      maxi = aux;
      id = i;
    }
  }

  cout << maxi << endl << id << endl;
  return 0;
}
