#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(); cin.tie(NULL)
using namespace std;

int main() {
  fast;
  int arr[20];
  for (int i = 19; i >= 0; i--) {
    cin >> arr[i];
  }

  for (int i = 0; i < 20; i++) {
    cout << "N[" << i << "] = " << arr[i] << endl;
  }
  return 0;
}
