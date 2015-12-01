#include <bits/stdc++.h>
//http://coj.uci.cu/24h/problem.xhtml?pid=1059
using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  vector<int> binary;
  int number, count;
  while ((cin>>number) && number) {
    count = 0;
    binary.clear();
    while (number >= 2) {
      binary.push_back(number % 2);
      number >>= 1;
    }
    binary.push_back(number);
    reverse(binary.begin(), binary.end());

    cout<<"The parity of ";
    for (int i = 0; i < binary.size(); ++i) {
      cout<<binary[i];
      if (binary[i]) count++;
    }
    cout<<" is "<<count<<" (mod 2)."<<endl;
  }
}
/*.-------------------------------------------------------------------------------------------------------------------------
Descripción

We define the parity of an integer N as the sum of the bits in binary representation computed modulo two.
As an example, the number 21 = 10101 has three 1s in its binary representation so it has parity 3 (mod 2), or 1.
In this problem you have to calculate the parity of an integer 1 <= I <= 2147483647 (2^31-1). Then, let start to work...

Especificación de entrada
Each line of the input has an integer I and the end of the input is indicated by a line where I = 0 that should not be processed.

Especificación de salida
For each integer I in the input you should print one line in the form "The parity of B is P (mod 2)." where B is the binary representation of I.
*/
