#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

void sol()
{
    int a , b;
    cin >> a >> b;
    if( a == 0 && b % 2 == 1){
        cout << "NO" << nl;
        return;
    }
    if(( b % 2 == 0 && a % 2 == 0 ) || ( a % 2 == 0 && b % 2 == 1 ))
        cout << "YES" << nl;
     else
        cout << "NO" << nl;
}

int main()
{
    ll t;
    cin >> t;
    while( t-- )
    {
       sol();
    }
    return 0;
}

