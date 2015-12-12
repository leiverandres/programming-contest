#include <bits/stdc++.h>
#define npos string::npos

using namespace std;

int main() {
    string s;
    string strzero = "000000", strone = "111111";
    cin >> s;
    if (s.find(strzero) != npos || s.find(strone) != npos) {
        cout << "Sorry, sorry!" << endl;
    } else {
        cout << "Good luck!" << endl;
    }
    return 0;
}
