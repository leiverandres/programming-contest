#include <bits/stdc++.h>
//https://www.urionlinejudge.com.br/judge/en/problems/view/1795
using namespace std;

long long pow_fast(int base, int exp){
      long long temp;

       if(exp == 0) return 1;
       temp = pow_fast(base, exp / 2);
       temp = temp * temp;
       if(exp % 2 == 1) temp *= base;
       return temp;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int row, ans = 1;
  cin >> row;

  cout << pow_fast(3, row) << endl;

  return 0;
}
