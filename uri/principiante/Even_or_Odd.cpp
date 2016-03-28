#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, num;
  cin >> n;
  while (n--) {
    cin >> num;
    if (num == 0) {
      cout << "NULL";
    } else if (num < 0) {
        if (num%2 == 0) {
          cout << "EVEN NEGATIVE";
        } else {
          cout << "ODD NEGATIVE";
        }
    } else {
      if (num%2 == 0) {
        cout << "EVEN POSITIVE";
      } else {
        cout << "ODD POSITIVE";
      }
    }
    cout << endl;
  }

  return 0;
}
