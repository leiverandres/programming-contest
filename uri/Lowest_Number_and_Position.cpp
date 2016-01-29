#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, mini = 10000, id, aux;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> aux;
    if (aux < mini) {
      mini = aux;
      id = i;
    }
  }

  cout << "Menor valor: " << mini << endl << "Posicao: " << id << endl;

}
