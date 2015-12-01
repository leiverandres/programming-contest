#include <bits/stdc++.h>
//dado un triangulo rectangulo cuyos catetos son a y b,
//determinar cuales son los lados de un rectangulo inscrito
//cuya area sea maxima.
//problema sencillo de optimización
using namespace std;

int main () {
  double a, b;
  int cases;
  cin>>cases;
  for (int i = 0; i < cases; ++i) {
    cin>>a>>b;
    double x = a/2;
    double y = b - ((b * x) / a);
    cout<<"Case "<<i+1<<": "<<x<<" "<<y<<endl;
    cout<<"Area: "<<x*y<<endl;
  }
}
