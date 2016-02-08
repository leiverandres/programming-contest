#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)

using namespace std;

int main() {
  int n;
  string num1, num2;
  cin >> n;
  while (n--) {
    cin >> num1 >> num2;

    int init = num1.size() - num2.size();
    if (num1.size() < num2.size()) {
      cout << "nao encaixa" << endl;
      continue;
    }
    if (num1.substr(init) == num2) {
      cout << "encaixa" << endl;
    } else {
      cout << "nao encaixa" << endl;
    }
  }

  return 0;
}
