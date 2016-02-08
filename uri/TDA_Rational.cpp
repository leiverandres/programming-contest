#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, a, b, c, d, divi, deno;
  char op, trash;
  cin >> n;
  while (n--) {
    cin >> a >> trash >> b >> op >> c >> trash >> d;
    if (op == '+') {
      deno = (d * a) + (c * b);
      divi = b * d;
    } else if (op == '-') {
      deno = (d * a) - (c * b);
      divi = b * d;
    } else if (op == '*') {
      deno = a * c;
      divi = b * d;
    } else {
      deno = a * d;
      divi = b * c;
    }
    int gcd = abs(__gcd(deno, divi));
    cout << deno << "/" << divi << " = " << deno/gcd << "/" << divi/gcd << endl;
  }
}
