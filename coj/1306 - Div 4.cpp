#include <bits/stdc++.h>

using namespace std;

int main() {
  int cases, ans = 0;
  string num;
  cin>>cases;
  while (cases--) {
    cin>>num;
    if (num.size() == 1) {
      ans = (int)(num[0] - '0');
    } else {
      ans = (int)( ((num[num.size() - 2] - '0') * 10) + (num[num.size() - 1] - '0'));
    }

    (ans % 4 == 0)? cout<<"YES\n" : cout<<"NO\n";
  }
}
