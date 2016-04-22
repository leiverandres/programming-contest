#include <bits/stdc++.h>
#define MAX 40
using namespace std;

vector<long> f(MAX);
vector<int> calls(MAX);

void fibo() {
  f[0] = 0;
  f[1] = 1;
  for (int i = 2; i < MAX; i++) {
    f[i] = f[i-1] + f[i-2];
  }
}

int count(int x) {
  if (x == 0) return 1;
  if (x == 1) return 1;
  return count(x-1) + count(x-2) + 1;
}

int main() {
  int tc, num;
  fibo();
  cin >> tc;
  while (tc--) {
    cin >> num;
    int calls = 0;
    cout << "fib(" << num << ") = " << count(num)-1 << " calls = " << f[num] << endl;
  }
  return 0;
}
