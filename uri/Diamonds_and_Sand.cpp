#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
  fast;
  int n;
  string line;
  cin >> n;
  while (n--) {
    int ans = 0;
    cin >> line;
    stack<int> st;
    for (int i = 0; i < line.size(); i++) {
      if (line[i] == '<') {
        st.push(i);
      } else if (line[i] == '>' and !st.empty()) {
        st.top();
        st.pop();
        ans++;
      }
    }

    cout << ans << endl;
  }

  return 0;
}
