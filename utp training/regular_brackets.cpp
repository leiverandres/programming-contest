#include <bits/stdc++.h>
#define fast_in ios_base::sync_with_stdio(false); cin.tie(NULL)
//no solved
using namespace std;

int main() {
  fast_in;
  string ex;
  cin >> ex;
  stack<int> st;
  int n =  ex.size();
  vector<int> begins(n, -1);
  vector<int> ans(n, -1);
  int longest = -100, count = 0;
  bool flag = false;
  for (int i = 0; i < ex.size(); ++i) {
    if (ex[i] == '(') {
      st.push(i);
    } else if (ex[i] == ')') {
      if (st.empty()) {
        begins[i] = ans[i] = -1;
      } else {
        begins[i] = st.top();
        st.pop();
        if (ex[begins[i]-1] == ')' and ans[begins[i]-1] != -1) {
          ans[i] = ans[begins[i]-1];
        } else {
          ans[i] = begins[i];
        }
      }
    }
  }
  // cout << "\n\tBEGINS: \n";
  // for (int i = 0; i < n; ++i) {
  //   cout << begins[i] << " ";
  // }
  // cout << "\n\tANS: \n";
  // for (int i = 0; i < n; ++i) {
  //   cout << ans[i] << " ";
  // }
  for (int i = 0; i < n; ++i) {
    if (ans[i] != -1) {
      if (flag){
        continue;
      } else {
        count++;
        flag = true;
      }

      longest = max(longest, abs((ans[i] + 1 ) - i));
    } else {
      flag = false;
    }
  }

  if (longest != -1) {
    cout << longest << " " << count << endl;
  } else {
    cout << "0 1\n";
  }

  return 0;
}
