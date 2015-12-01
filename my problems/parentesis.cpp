#include <bits/stdc++.h>
//problema de parentizacion
//idea sacada de una entrada en hackerearth
using namespace std;

int main () {
  string str;
  cin>>str;
  stack <int> s;
  s.push('*');
  for (int i = 0; i < str.size(); ++i) {
    if (str[i] == '(') {
      s.push(str[i]);
    }else if (str[i] == ')'){
      if (!s.empty()){
        s.pop();
      }else {
        break;
      }
    }
  }

  (s.size() ==  1) ? cout<<"Balaced\n" : cout<<"Unbalanced\n";
  return 0;
}
