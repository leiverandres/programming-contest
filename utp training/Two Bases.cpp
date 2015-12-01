#include <bits/stdc++.h>
//no accepted, problem from codeforces
using namespace std;

int toInt(string x){
 stringstream ss;
 ss << x;
 int r;
 ss >> r;
 return r;
}

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int b1, b2, n1, n2, tmp;
  long long cont1 = 0, cont2 = 0;

  cin>>n1>>b1;
  for (int i = 0; i < n1; ++i) {
    cin>>tmp;
    cont1 += (tmp)*(pow(b1, n1 - i - 1));
  }

  cin>>n2>>b2;
  for (int i = 0; i < n2; ++i) {
    cin>>tmp;
    cont2 += (tmp)*(pow(b2, n2 - i - 1));
  }

  if (cont1 == cont2) {
    cout<<"="<<endl;
  }else if (cont1 > cont2) {
    cout<<">"<<endl;
  }else {
    cout<<"<"<<endl;;
  }

  return 0;
}
