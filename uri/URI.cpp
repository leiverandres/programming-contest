#include <bits/stdc++.h>
using namespace std;

bool is_power_two(int x) {
    return __builtin_popcount(x) == 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, u, r , l;
    while (cin >> n and n) {
        int a_u = 0, a_r = 0, a_l = 0;
        while (n--) { 
            cin >> u >> r >> l;
            int maxi = max(u, max(r, l));
            if (is_power_two(u)) {
                a_u += 1 + (u == maxi? 1: 0); 
            }
            
            if (is_power_two(r)) {
                a_r += 1 + (r == maxi? 1: 0);
            }
            
            if (is_power_two(l)) {
                a_l += 1 + (l == maxi? 1: 0);
            }
        }
        int wi = max(a_u, max(a_r, a_l));
        if ((a_u == wi and a_r == wi) or (a_u == wi and a_l == wi) or (a_r == wi and a_l == wi)) {
            cout << "URI" << endl;
        } else if (a_u == wi) {
            cout << "Uilton" << endl;
        } else if (a_r == wi) {
            cout << "Rita" << endl;
        } else if (a_l == wi) {
            cout << "Ingred" << endl; 
        }
    }
}