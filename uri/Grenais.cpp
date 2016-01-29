#include <bits/stdc++.h>
using namespace std;

int main() {
  int inter = 0, gremio = 0, draws = 0, p_i, p_g, op, times = 0;
  do {
    cin >> p_i >> p_g;
    if (p_i == p_g) {
      draws++;
    } else if (p_i > p_g) {
      inter++;
    } else {
      gremio++;
    }
    times++;
    cout << "Novo grenal (1-sim 2-nao)" << endl;
  } while ((cin >> op) and (op == 1));

  cout << times << " grenais" << endl;
  cout << "Inter:" << inter << endl;
  cout << "Gremio:" << gremio << endl;
  cout << "Empates:" << draws << endl;
  if (inter != gremio)
    cout << ((inter > gremio)? "Inter":"Gremiog++") << " venceu mais" << endl;
  else
    cout << "Nao houve vencedor" << endl;
  return 0;
}
