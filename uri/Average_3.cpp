#include <bits/stdc++.h>

using namespace std;

int main() {
  double acum = 0, aux;
  double coef[4] = {2, 3, 4, 1};
  for (int i = 0; i < 4; i++) {
    cin >> aux;
    acum += (aux * coef[i]);
  }
  double avrg = acum / 10.0;
  cout << "Media: " << fixed << setprecision(1) << avrg << endl;

  if (avrg >= 7.0) {
    cout << "Aluno aprovado." << endl;
  } else if (avrg < 5.0) {
    cout << "Aluno reprovado." << endl;
  } else {
    double extra;
    cout << "Aluno em exame." << endl;
    cin >> extra;
    cout << "Nota do exame: " << extra << endl;
    avrg = (avrg + extra) / 2.0;
    if (avrg >= 5.0) {
      cout << "Aluno aprovado." << endl;
    } else {
      cout << "Aluno reprovado." << endl;
    }
    cout << "Media final: " << avrg << endl;
  }

  return 0;
}
