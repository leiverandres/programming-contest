#include <bits/stdc++.h>

using namespace std;

int main() {
  int pos[7] = {100, 50, 20, 10, 5, 2, 1};
  int num;
  cin >> num;
  cout << num << endl;
  for (int i = 0; i < 7; i++) {
    int cant = 0;
    if (num >= pos[i]) {
      cant = num / pos[i];
      num -= (cant * pos[i]);
    }
    cout << cant << " nota(s) de R$ " << pos[i] << ",00"<< endl;
  }

  return 0;
}
