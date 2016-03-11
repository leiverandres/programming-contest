#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	char v[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> v[i][j];
		}
	}
	int acum_row, acum_col, ans = 0;
	for (int i = 0; i < n; i++) {
		acum_row = 0;
		for (int j = 0; j < n; j++) {
			if (v[i][j] == 'C') {
				acum_row++;
			}
		}
		acum_row--;
		ans += (acum_row*(acum_row+1))/2;
	}
	for (int i = 0; i < n; i++) {
		acum_col = 0;
		for (int j = 0; j < n; j++) {
			if (v[j][i] == 'C') {
				acum_col++;
			}
		}
		acum_col--;
		ans += (acum_col*(acum_col+1))/2;
	}
	cout << ans << endl;
	return 0;
}
