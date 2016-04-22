#include <bits/stdc++.h>
#define MAX 5002
using namespace std;

vector<int> sieve_count(MAX);

bool has_repeted(int x) {
  unordered_set<int> s; // c++11
  while (x) {
    if(s.count(x%10) == 0) {
      s.insert(x%10);
    } else {
      return true;
    }
    x /= 10;
  }
  return false;
}

void sieve() {
  sieve_count[0] = 0;
  for (int i = 1; i < MAX; i++) {
    sieve_count[i] = sieve_count[i-1] + (!has_repeted(i));
  }
}

int main() {
  sieve();
  int a, b;
  while (cin >> a >> b) {
    cout << sieve_count[b] - sieve_count[a-1] << endl;
  }
  return 0;
}
