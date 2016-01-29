#include <bits/stdc++.h>

using namespace std;

int main() {
  int day_b, day_e, h_b, m_b, s_b, h_e, m_e, s_e;
  string trash;
  cin >> trash >> day_b;
  cin >> h_b >> trash >> m_b >> trash >> s_b;
  cin >> trash >> day_e;
  cin >> h_e >> trash >> m_e >> trash >> s_e;

   
  if (h_b != h_e)
    cout << (abs(day_e - day_b) - 1) << " dia(s)" << endl;
  else
    cout << (abs(day_e - day_b)) << " dia(s)" << endl;

  if (h_b <= h_e)
    cout << abs(h_e - h_b) << " hora(s)" << endl;
  else
    cout << (h_e + (24 - h_b)) << " hora(s)" << endl;

  cout << abs(m_e - m_b) << " minuto(s)" << endl;
  cout << abs(s_e - s_b) << " segundo(s)" << endl;
  return 0;
}
