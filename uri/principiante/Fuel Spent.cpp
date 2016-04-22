#include <bits/stdc++.h>

using namespace std;

int main() {
  int hours, speed;
  cin >> hours >> speed;
  cout << fixed << setprecision(3) << ((hours*speed)/12.0) << endl;
  return 0;
}
