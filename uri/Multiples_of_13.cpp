#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  long long sum = 0;
  if (b < a) {
    int temp = a;
    a = b;
    b = temp;
  }

  for (int i = a; i <= b; i++) {
    if (i%13 != 0)
      sum += i;
  }

  cout << sum << endl;
}
