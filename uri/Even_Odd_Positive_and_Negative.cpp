#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int in = 5, aux, even, odd, pos, neg;
  even = odd = pos = neg = 0;
  while (in--) {
    cin >> aux;
    if (aux > 0) {
      pos++;
    } else if (aux < 0){
      neg++;
    }

    if (aux%2 == 0) {
      even++;
    } else {
      odd++;
    }
  }

  cout << even << " valor(es) par(es)" << endl;
  cout << odd << " valor(es) impar(es)" << endl;
  cout << pos << " valor(es) positivo(s)" << endl;
  cout << neg << " valor(es) negativo(s)" << endl;

  return 0;
}
