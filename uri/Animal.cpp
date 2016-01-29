#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
  fast;
  string key1, key2, key3;
  cin >> key1 >> key2 >> key3;
  if (key1 == "vertebrado") {
    if (key2 == "ave") {
      if (key3 == "carnivoro") {
        cout << "aguia" << endl;
      } else {
        cout << "pomba" << endl;
      }
    } else {
      if (key3 == "onivoro") {
        cout << "homem" << endl;
      } else {
        cout << "vaca" << endl;
      }
    }
  } else {
    if (key2 == "inseto") {
      if (key3 == "hematofago") {
        cout << "pulga" << endl;
      } else {
        cout << "lagarta" << endl;
      }
    } else {
      if (key3 == "hematofago") {
        cout << "sanguessuga" << endl;
      } else {
        cout << "minhoca" << endl;
      }
    }
  }
}
