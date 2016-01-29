#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
  fast;
  int start, end;
  cin >> start >> end;
  cout << "O JOGO DUROU ";
  if (start >= end) {
    cout << (24 - start + end);
  } else {
    cout << end - start;
  }
  cout << " HORA(S)" << endl;
}
