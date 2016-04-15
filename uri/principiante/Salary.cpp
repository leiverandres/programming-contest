#include <bits/stdc++.h>

using namespace std;

int main() {
  cout << fixed; cout.precision(2);
  int number;
  double salary, hours, ans;
  cin >> number >> hours >> salary;
  ans = hours * salary;
  cout << "NUMBER = " << number << endl << "SALARY = U$ " << ans << endl;
  return 0;
}
