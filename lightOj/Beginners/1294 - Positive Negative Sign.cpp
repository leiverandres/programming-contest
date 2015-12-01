#include <bits/stdc++.h>
 //http://lightoj.com/volume_showproblem.php?problem=1294
using namespace std;
 
int main()
{
    int cases; cin>>cases;
    for (int caso = 0; caso < cases; ++caso)
    {
        long n, m;
        cin>>n>>m;
        
 
        cout<<"Case "<<caso+1<<": "<<(n*m)/2<<endl;
    }
 
    return 0;
}