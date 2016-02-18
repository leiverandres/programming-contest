#include <bits/stdc++.h>
using namespace std;

bool is_power_two(int x) {
    return __builtin_popcount(x) == 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed; cout.precision(2);
    int n, m, cant, p;
    double value;
    string name;
    map<string, double> market;
    cin >> n;
    while (n--) {
        double ans = 0.0;
        cin >> m;
        while (m--) {
            cin >> name >> value;
            market[name] = value;
        }
        cin >> p;
        while (p--) {
            cin >> name >> cant;
            ans += cant * market[name];
        }
        cout << "R$ " << ans << endl; 
    }
}