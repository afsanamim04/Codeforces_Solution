#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
#define pb push_back
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while( t-- ){
       int n;
       cin >> n;
       vector< int > v(n+5);
       for( int i = 0; i < n; ++i ) cin >> v[i];
       sort ( v.rbegin(), v.rend());
       if( n % 2){
            int p = n/2;
       p++;
        cout << v[p-1] << nl;
       }
       else{
            int p = n/2;
        cout << v[p-1] << nl;
       }

    }
}

