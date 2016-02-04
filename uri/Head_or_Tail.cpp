#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
  fast;
  int n, aux;
  while(cin >> n and n) {
    int acuA = 0, acuB = 0;
    for (int i = 0; i < n; i++) {
      cin >> aux;
      if (aux)
        acuB++;
      else
        acuA++;
    }

    cout << "Mary won " << acuA << " times and John won " << acuB << " times" << endl;
  }
  return 0;
}
