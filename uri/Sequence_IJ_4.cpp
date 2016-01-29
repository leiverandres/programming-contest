#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
  fast;
  double offset = 0.0;
  while (offset <= 2.0) {
    for (double i = 1; i <= 3; i++) {
      cout << "I=" << offset << " J=" << i+offset << endl;
    }
    offset += 0.2;
  }
}
