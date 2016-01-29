#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b;
  bool are_mul = false;
  cin >> a >> b;
  if (a > b) {
    if (a%b == 0)
      are_mul = true;
  } else {
    if(b%a == 0)
      are_mul = true;
  }

  cout << ((are_mul)? "Sao Multiplos":"Nao sao Multiplos") << endl;
}
