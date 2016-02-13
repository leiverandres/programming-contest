#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t, qt, s, aux;
  cin >> t;
  while (t--) {
    int mini = 1000000;
    int id_min = -1;
    cin >> qt >> s;
    bool flag = false;
    for (int i = 1; i <= qt; i++) {
      cin >> aux;
      if (abs(s - aux) < mini) {
        mini = abs(s - aux);
        id_min = i;
      }
    }
    cout << id_min << endl;
  }
}
