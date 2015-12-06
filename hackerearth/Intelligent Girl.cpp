#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  vector<int> arr(s.size(), 0);
  if(s[s.size()-1] % 2 == 0) {
    arr[s.size()-1]++;
  }
  for (int i = s.size()-2; i >= 0; --i) {
    if ((s[i] - '0') % 2 == 0){
      arr[i] = arr[i+1] + 1;
    } else {
      arr[i] += arr[i+1];
    }
  }

  for (int i = 0; i < s.size(); ++i) {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}
