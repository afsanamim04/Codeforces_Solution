#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
#define pb push_back
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

void sol()
{
    string a, b;
    cin >> a >> b;
    int n = a.size();
    int m = b.size();
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
        for( int i = 1; i <= (n - m); ++i ){
        b += '0';
    }
    //cout << a << nl << b << nl;
    int c1 = 0 ;
    for( int i = 0; i < b.size()-1; ++i )
    {
        if( a[i] == '0' && b[i] == '1'){
            c1++ ;
            //if(b[i+1] == '1') b[i+1] = '0';
             if(b[i+1]=='0') b[i+1] = '1';
        }
        else if( a[i]== '1' && b[i]=='1')
        {
            cout << c1 << nl;
            return;
        }

    }
    cout << c1 << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while( t-- )
    {
        sol();
    }
    return 0;
}

