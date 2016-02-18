#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    while (cin >> s) {
        stack<int> st;
        bool flag = false;
        for (int i = 0; i <= s.size(); i++) {
            if (s[i] == '(') {
                st.push(i);
            } else if (s[i] == ')') {
                if (!st.empty()) {
                    st.pop();   
                } else {
                    flag = true;
                    break;
                }
                
            }
        }
        if (st.empty() and !flag) {
            cout << "correct" << endl;
        } else {
            cout << "incorrect" << endl;
        }
    }
}