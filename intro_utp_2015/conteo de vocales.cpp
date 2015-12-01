#include <bits/stdc++.h>

using namespace std;

bool is_vowel(char x) {
  return x == 'a' ||
         x == 'e' ||
         x == 'i' ||
         x == 'o' ||
         x == 'u';
}

int main() {
  int cases;
  string s;
  cin>>cases;
  for (int caso = 0; caso < cases; ++caso) {
    cin>>s;
    int vowels = 0, cons = 0;
    for (int i = 0; i < s.size(); ++i) {
      if (is_vowel(s[i]))
        vowels++;
      else
        cons++;
    }
    cout<<s<<endl;
    (vowels > cons)? cout<<"1\n" : cout<<"0\n";
  }
  return 0;
}
