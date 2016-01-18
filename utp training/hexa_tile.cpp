#include <bits/stdc++.h>
//https://www.urionlinejudge.com.br/judge/en/problems/view/1393
using namespace std;
vector<long long> fibo(43, 0);


void fibos() {
  fibo[0] = fibo [1] = 1;
  for (int i = 2; i < fibo.size(); i++) {
    fibo[i] = fibo[i-1] + fibo[i-2];
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  fibos();
  while (cin >> n and n) {
    cout << fibo[n] << endl;
  }

  return 0;
}
