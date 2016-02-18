#include <bits/stdc++.h>
using namespace std;

vector <string> v(4);

int get_col(int col) {
    string s;
    for (int i = 0; i < 4; i++) {
        s += v[i][col];
    }
    return atoi(s.c_str());
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    for (int i = 0; i < 4; i++) {
        cin >> v[i];
    }
    
    int n = v[0].size() - 2;
    
    
    int l = get_col(0);
    int r = get_col(n+1);
    
    string ans = "";
    for (int i = 1; i <= n; i++) {
        int line = (l * get_col(i) + r) % 257;
        ans += (char)line;
    }
    cout << ans << endl;   
}