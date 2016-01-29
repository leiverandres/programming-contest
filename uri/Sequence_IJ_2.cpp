#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(); cin.tie(NULL)
using namespace std;

int main() {
  fast;
  int x = 1;
  while (x < 10) {
    for (int i = 7; i >= 5; i--) {
      cout << "I=" << x << " J=" << i << endl;
    }
    x += 2;
  }
  return 0;
}
